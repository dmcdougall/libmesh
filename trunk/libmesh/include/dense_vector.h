// $Id: dense_vector.h,v 1.1 2003-02-28 23:37:41 benkirk Exp $

// The Next Great Finite Element Library.
// Copyright (C) 2002  Benjamin S. Kirk, John W. Peterson
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __dense_vector_h__
#define __dense_vector_h__

// C++ includes
#include <iomanip>
#include <vector>

// Local Includes
#include "mesh_common.h"


// Forward Declarations
template <typename T> class DenseSubVector;



/**
 * Defines a dense vector for use in Finite Element-type computations.
 * This class is to basically compliment the \p DenseMatix class.  It
 * has additional capabilities over the \p std::vector that make it
 * useful for finite elements, particulary for systems of equations.
 *
 * @author Benjamin S. Kirk, 2003
 */ 

// ------------------------------------------------------------
// DenseVector class definition
template<typename T>
class DenseVector
{
public:

  /**
   * Constructor.  Creates a dense vector of dimension \p n.
   */
  DenseVector(const unsigned int n=0);

  /**
   * Copy-constructor.
   */
  DenseVector (const DenseVector<T>& other_vector);
  
  /**
   * Destructor.  Frees all associated memory.
   */     
  ~DenseVector();

  /**
   * Assignment operator.
   */
  DenseVector<T>& operator = (const DenseVector<T>& other_vector);
  
  /**
   * Resize the vector. Sets all elements to 0.
   */
  void resize (const unsigned int n);

  /**
   * Set every element in the vector to 0.
   */
  void zero();

  /**
   * @returns the \p (i) element of the vector.
   */
  T operator() (const unsigned int i) const;

  /**
   * @returns the \p (i,j) element of the vector as a writeable reference.
   */
  T & operator() (const unsigned int i);

  /**
   * Multiplies every element in the vector by \p factor.
   */
  void scale (const T factor);
  
  /**
   * Adds \p factor to every element in the vector.
   */
  void add (const T factor,
	    const DenseVector<T>& vec);


#ifdef USE_COMPLEX_NUMBERS

  /**
   * For a complex-valued vector, let a real-valued
   * vector being added to us (Note that the other
   * way around would be wrong!). 
   */
  void add (const Complex factor,
	    const DenseVector<Real>& vec);

#endif


  /**
   * @returns the size of the vector.
   */
  unsigned int size() const { return _val.size(); }

  /**
   * Access to the values array.  This should be used with
   * caution but can  be used to speed up code compilation
   * significantly.
   */
  std::vector<T>& get_values() { return _val; }

  /**
   * Pretty-print the vector to \p stdout.
   */
  void print() const;
  
private:

  /**
   * The actual data values, stored as a 1D array.
   */
  std::vector<T> _val;

  /**
   * Make the DenseSubVector<T> class a friend
   * so that they can access values directly
   * from our vector.
   */
  friend class DenseSubVector<T>;
};



// ------------------------------------------------------------
// DenseVector member functions
template<typename T>
inline
DenseVector<T>::DenseVector(const unsigned int n) :
  _val (n, 0.)
{
}



template<typename T>
inline
DenseVector<T>::DenseVector (const DenseVector& other_vector) :
  _val(other_vector._val)
{  
}



template<typename T>
inline
DenseVector<T>::~DenseVector()
{
}



template<typename T>
inline
DenseVector<T>& DenseVector<T>::operator = (const DenseVector<T>& other_vector)
{
  _val = _other_vector.val;
  
  return *this;
}



template<typename T>
inline
void DenseVector<T>::resize(const unsigned int n)
{
  _val.resize(n);

  zero();
}



template<typename T>
inline
void DenseVector<T>::zero()
{
  std::fill (_val.begin(),
	     _val.end(),
	     0.);
}



template<typename T>
inline
T DenseVector<T>::operator () (const unsigned int i) const
{
  assert (i < _val.size());
  
  return _val[i]; 
}



template<typename T>
inline
T & DenseVector<T>::operator () (const unsigned int i)
{
  assert (i < _val.size());
  
  return _val[i]; 
}
      


template<typename T>
inline
void DenseVector<T>::scale (const T factor)
{
  for (unsigned int i=0; i<_val.size(); i++)
    _val[i] *= factor;
}




template<typename T>
inline
void DenseVector<T>::add (const T factor,
			  const DenseVector<T>& mat)
{
  assert (this->size() == vec.size());

  for (unsigned int i=0; i<this->size(); i++)
    (*this)(i) += factor*vec(i);
}



#ifdef USE_COMPLEX_NUMBERS

/*
 * For complex numbers, also offer a method
 * to add a real-valued vector to a complex-
 * valued vector (but not the other way around)!
 */

template<>
inline
void DenseVector<Complex>::add (const Complex factor,
				const DenseVector<Real>& vec)
{
  assert (this->size() == vec.size());

  for (unsigned int i=0; i<this->size(); i++)
    (*this)(i) += factor*vec(i);
}

#endif



template<typename T>
inline
void DenseVector<T>::print () const
{  
  for (unsigned int i=0; i<this->size(); i++)
    std::cout << std::setw(8) << (*this)(i) << std::endl;
}



#endif // #ifndef __dense_vector_h__

