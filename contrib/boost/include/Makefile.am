#includedir = $(prefix)/include/libmesh


# These are the headers we actually want to install and make available
if LIBMESH_INSTALL_INTERNAL_BOOST
  nobase_include_HEADERS = \
        boost/aligned_storage.hpp \
        boost/assert.hpp \
        boost/checked_delete.hpp \
        boost/config/compiler/clang.hpp \
        boost/config/compiler/common_edg.hpp \
        boost/config/compiler/gcc.hpp \
        boost/config/compiler/intel.hpp \
        boost/config/no_tr1/memory.hpp \
        boost/config/no_tr1/utility.hpp \
        boost/config/stdlib/libcpp.hpp \
        boost/config/platform/linux.hpp \
        boost/config/platform/macos.hpp \
        boost/config/posix_features.hpp \
        boost/config/select_compiler_config.hpp \
        boost/config/select_platform_config.hpp \
        boost/config/select_stdlib_config.hpp \
        boost/config/stdlib/libstdcpp3.hpp \
        boost/config/suffix.hpp \
        boost/config/user.hpp \
        boost/config.hpp \
        boost/cstdint.hpp \
        boost/current_function.hpp \
        boost/detail/sp_typeinfo.hpp \
        boost/detail/workaround.hpp \
        boost/exception/detail/attribute_noreturn.hpp \
        boost/exception/exception.hpp \
        boost/limits.hpp \
        boost/math/common_factor_ct.hpp \
        boost/math_fwd.hpp \
        boost/memory_order.hpp \
        boost/mpl/and.hpp \
        boost/mpl/aux_/adl_barrier.hpp \
        boost/mpl/aux_/arity.hpp \
        boost/mpl/aux_/config/adl.hpp \
        boost/mpl/aux_/config/compiler.hpp \
        boost/mpl/aux_/config/ctps.hpp \
        boost/mpl/aux_/config/dtp.hpp \
        boost/mpl/aux_/config/eti.hpp \
        boost/mpl/aux_/config/gcc.hpp \
        boost/mpl/aux_/config/integral.hpp \
        boost/mpl/aux_/config/intel.hpp \
        boost/mpl/aux_/config/lambda.hpp \
        boost/mpl/aux_/config/msvc.hpp \
        boost/mpl/aux_/config/nttp.hpp \
        boost/mpl/aux_/config/overload_resolution.hpp \
        boost/mpl/aux_/config/preprocessor.hpp \
        boost/mpl/aux_/config/static_constant.hpp \
        boost/mpl/aux_/config/ttp.hpp \
        boost/mpl/aux_/config/use_preprocessed.hpp \
        boost/mpl/aux_/config/workaround.hpp \
        boost/mpl/aux_/include_preprocessed.hpp \
        boost/mpl/aux_/integral_wrapper.hpp \
        boost/mpl/aux_/lambda_arity_param.hpp \
        boost/mpl/aux_/lambda_support.hpp \
        boost/mpl/aux_/na.hpp \
        boost/mpl/aux_/na_fwd.hpp \
        boost/mpl/aux_/na_spec.hpp \
        boost/mpl/aux_/nested_type_wknd.hpp \
        boost/mpl/aux_/nttp_decl.hpp \
        boost/mpl/aux_/preprocessed/gcc/and.hpp \
        boost/mpl/aux_/preprocessed/plain/and.hpp \
        boost/mpl/aux_/preprocessor/def_params_tail.hpp \
        boost/mpl/aux_/preprocessor/enum.hpp \
        boost/mpl/aux_/preprocessor/params.hpp \
        boost/mpl/aux_/static_cast.hpp \
        boost/mpl/aux_/template_arity_fwd.hpp \
        boost/mpl/aux_/value_wknd.hpp \
        boost/mpl/bool.hpp \
        boost/mpl/bool_fwd.hpp \
        boost/mpl/eval_if.hpp \
        boost/mpl/identity.hpp \
        boost/mpl/if.hpp \
        boost/mpl/int.hpp \
        boost/mpl/int_fwd.hpp \
        boost/mpl/integral_c.hpp \
        boost/mpl/integral_c_fwd.hpp \
        boost/mpl/integral_c_tag.hpp \
        boost/mpl/lambda_fwd.hpp \
        boost/mpl/limits/arity.hpp \
        boost/mpl/not.hpp \
        boost/mpl/size_t.hpp \
        boost/mpl/size_t_fwd.hpp \
        boost/mpl/void_fwd.hpp \
        boost/noncopyable.hpp \
        boost/pool/detail/guard.hpp \
        boost/pool/detail/mutex.hpp \
        boost/pool/detail/pool_construct.ipp \
        boost/pool/object_pool.hpp \
        boost/pool/pool.hpp \
        boost/pool/pool_alloc.hpp \
        boost/pool/poolfwd.hpp \
        boost/pool/simple_segregated_storage.hpp \
        boost/pool/singleton_pool.hpp \
        boost/preprocessor/arithmetic/add.hpp \
        boost/preprocessor/arithmetic/dec.hpp \
        boost/preprocessor/arithmetic/inc.hpp \
        boost/preprocessor/arithmetic/sub.hpp \
        boost/preprocessor/cat.hpp \
        boost/preprocessor/comma_if.hpp \
        boost/preprocessor/config/config.hpp \
        boost/preprocessor/control/detail/edg/while.hpp \
        boost/preprocessor/control/detail/while.hpp \
        boost/preprocessor/control/expr_iif.hpp \
        boost/preprocessor/control/if.hpp \
        boost/preprocessor/control/iif.hpp \
        boost/preprocessor/control/while.hpp \
        boost/preprocessor/debug/error.hpp \
        boost/preprocessor/detail/auto_rec.hpp \
        boost/preprocessor/detail/check.hpp \
        boost/preprocessor/detail/is_binary.hpp \
        boost/preprocessor/empty.hpp \
        boost/preprocessor/facilities/empty.hpp \
        boost/preprocessor/facilities/identity.hpp \
        boost/preprocessor/facilities/overload.hpp \
        boost/preprocessor/identity.hpp \
        boost/preprocessor/inc.hpp \
        boost/preprocessor/list/adt.hpp \
        boost/preprocessor/list/append.hpp \
        boost/preprocessor/list/detail/edg/fold_left.hpp \
        boost/preprocessor/list/detail/edg/fold_right.hpp \
        boost/preprocessor/list/detail/fold_left.hpp \
        boost/preprocessor/list/detail/fold_right.hpp \
        boost/preprocessor/list/fold_left.hpp \
        boost/preprocessor/list/fold_right.hpp \
        boost/preprocessor/list/for_each_i.hpp \
        boost/preprocessor/list/reverse.hpp \
        boost/preprocessor/list/transform.hpp \
        boost/preprocessor/logical/and.hpp \
        boost/preprocessor/logical/bitand.hpp \
        boost/preprocessor/logical/bool.hpp \
        boost/preprocessor/logical/compl.hpp \
        boost/preprocessor/punctuation/comma.hpp \
        boost/preprocessor/punctuation/comma_if.hpp \
        boost/preprocessor/repeat.hpp \
        boost/preprocessor/repetition/detail/edg/for.hpp \
        boost/preprocessor/repetition/detail/for.hpp \
        boost/preprocessor/repetition/for.hpp \
        boost/preprocessor/repetition/repeat.hpp \
        boost/preprocessor/stringize.hpp \
        boost/preprocessor/tuple/eat.hpp \
        boost/preprocessor/tuple/elem.hpp \
        boost/preprocessor/tuple/rem.hpp \
        boost/preprocessor/tuple/to_list.hpp \
        boost/preprocessor/variadic/elem.hpp \
        boost/preprocessor/variadic/size.hpp \
        boost/shared_ptr.hpp \
        boost/smart_ptr/bad_weak_ptr.hpp \
        boost/smart_ptr/detail/operator_bool.hpp \
        boost/smart_ptr/detail/shared_count.hpp \
        boost/smart_ptr/detail/sp_convertible.hpp \
        boost/smart_ptr/detail/sp_counted_base.hpp \
        boost/smart_ptr/detail/sp_counted_base_gcc_x86.hpp \
        boost/smart_ptr/detail/sp_counted_impl.hpp \
        boost/smart_ptr/detail/sp_has_sync.hpp \
        boost/smart_ptr/detail/sp_nullptr_t.hpp \
        boost/smart_ptr/detail/spinlock.hpp \
        boost/smart_ptr/detail/spinlock_pool.hpp \
        boost/smart_ptr/detail/spinlock_sync.hpp \
        boost/smart_ptr/detail/yield_k.hpp \
        boost/smart_ptr/shared_ptr.hpp \
        boost/static_assert.hpp \
        boost/thread/mutex.hpp \
        boost/throw_exception.hpp \
        boost/type_traits/add_const.hpp \
        boost/type_traits/add_cv.hpp \
        boost/type_traits/add_lvalue_reference.hpp \
        boost/type_traits/add_pointer.hpp \
        boost/type_traits/add_reference.hpp \
        boost/type_traits/add_rvalue_reference.hpp \
        boost/type_traits/add_volatile.hpp \
        boost/type_traits/aligned_storage.hpp \
        boost/type_traits/alignment_of.hpp \
        boost/type_traits/broken_compiler_spec.hpp \
        boost/type_traits/common_type.hpp \
        boost/type_traits/conditional.hpp \
        boost/type_traits/config.hpp \
        boost/type_traits/decay.hpp \
        boost/type_traits/detail/bool_trait_def.hpp \
        boost/type_traits/detail/bool_trait_undef.hpp \
        boost/type_traits/detail/cv_traits_impl.hpp \
        boost/type_traits/detail/false_result.hpp \
        boost/type_traits/detail/has_binary_operator.hpp \
        boost/type_traits/detail/has_postfix_operator.hpp \
        boost/type_traits/detail/has_prefix_operator.hpp \
        boost/type_traits/detail/ice_and.hpp \
        boost/type_traits/detail/ice_eq.hpp \
        boost/type_traits/detail/ice_not.hpp \
        boost/type_traits/detail/ice_or.hpp \
        boost/type_traits/detail/is_function_ptr_helper.hpp \
        boost/type_traits/detail/is_mem_fun_pointer_impl.hpp \
        boost/type_traits/detail/size_t_trait_def.hpp \
        boost/type_traits/detail/size_t_trait_undef.hpp \
        boost/type_traits/detail/template_arity_spec.hpp \
        boost/type_traits/detail/type_trait_def.hpp \
        boost/type_traits/detail/type_trait_undef.hpp \
        boost/type_traits/detail/yes_no_type.hpp \
        boost/type_traits/extent.hpp \
        boost/type_traits/floating_point_promotion.hpp \
        boost/type_traits/function_traits.hpp \
        boost/type_traits/has_bit_and.hpp \
        boost/type_traits/has_bit_and_assign.hpp \
        boost/type_traits/has_bit_or.hpp \
        boost/type_traits/has_bit_or_assign.hpp \
        boost/type_traits/has_bit_xor.hpp \
        boost/type_traits/has_bit_xor_assign.hpp \
        boost/type_traits/has_complement.hpp \
        boost/type_traits/has_dereference.hpp \
        boost/type_traits/has_divides.hpp \
        boost/type_traits/has_divides_assign.hpp \
        boost/type_traits/has_equal_to.hpp \
        boost/type_traits/has_greater.hpp \
        boost/type_traits/has_greater_equal.hpp \
        boost/type_traits/has_left_shift.hpp \
        boost/type_traits/has_left_shift_assign.hpp \
        boost/type_traits/has_less.hpp \
        boost/type_traits/has_less_equal.hpp \
        boost/type_traits/has_logical_and.hpp \
        boost/type_traits/has_logical_not.hpp \
        boost/type_traits/has_logical_or.hpp \
        boost/type_traits/has_minus.hpp \
        boost/type_traits/has_minus_assign.hpp \
        boost/type_traits/has_modulus.hpp \
        boost/type_traits/has_modulus_assign.hpp \
        boost/type_traits/has_multiplies.hpp \
        boost/type_traits/has_multiplies_assign.hpp \
        boost/type_traits/has_negate.hpp \
        boost/type_traits/has_new_operator.hpp \
        boost/type_traits/has_not_equal_to.hpp \
        boost/type_traits/has_nothrow_assign.hpp \
        boost/type_traits/has_nothrow_constructor.hpp \
        boost/type_traits/has_nothrow_copy.hpp \
        boost/type_traits/has_nothrow_destructor.hpp \
        boost/type_traits/has_operator.hpp \
        boost/type_traits/has_plus.hpp \
        boost/type_traits/has_plus_assign.hpp \
        boost/type_traits/has_post_decrement.hpp \
        boost/type_traits/has_post_increment.hpp \
        boost/type_traits/has_pre_decrement.hpp \
        boost/type_traits/has_pre_increment.hpp \
        boost/type_traits/has_right_shift.hpp \
        boost/type_traits/has_right_shift_assign.hpp \
        boost/type_traits/has_trivial_assign.hpp \
        boost/type_traits/has_trivial_constructor.hpp \
        boost/type_traits/has_trivial_copy.hpp \
        boost/type_traits/has_trivial_destructor.hpp \
        boost/type_traits/has_trivial_move_assign.hpp \
        boost/type_traits/has_trivial_move_constructor.hpp \
        boost/type_traits/has_unary_minus.hpp \
        boost/type_traits/has_unary_plus.hpp \
        boost/type_traits/has_virtual_destructor.hpp \
        boost/type_traits/ice.hpp \
        boost/type_traits/integral_constant.hpp \
        boost/type_traits/integral_promotion.hpp \
        boost/type_traits/intrinsics.hpp \
        boost/type_traits/is_abstract.hpp \
        boost/type_traits/is_arithmetic.hpp \
        boost/type_traits/is_array.hpp \
        boost/type_traits/is_base_and_derived.hpp \
        boost/type_traits/is_base_of.hpp \
        boost/type_traits/is_class.hpp \
        boost/type_traits/is_complex.hpp \
        boost/type_traits/is_compound.hpp \
        boost/type_traits/is_const.hpp \
        boost/type_traits/is_convertible.hpp \
        boost/type_traits/is_copy_constructible.hpp \
        boost/type_traits/is_empty.hpp \
        boost/type_traits/is_enum.hpp \
        boost/type_traits/is_float.hpp \
        boost/type_traits/is_floating_point.hpp \
        boost/type_traits/is_function.hpp \
        boost/type_traits/is_fundamental.hpp \
        boost/type_traits/is_integral.hpp \
        boost/type_traits/is_lvalue_reference.hpp \
        boost/type_traits/is_member_function_pointer.hpp \
        boost/type_traits/is_member_object_pointer.hpp \
        boost/type_traits/is_member_pointer.hpp \
        boost/type_traits/is_nothrow_move_assignable.hpp \
        boost/type_traits/is_nothrow_move_constructible.hpp \
        boost/type_traits/is_object.hpp \
        boost/type_traits/is_pod.hpp \
        boost/type_traits/is_pointer.hpp \
        boost/type_traits/is_polymorphic.hpp \
        boost/type_traits/is_reference.hpp \
        boost/type_traits/is_rvalue_reference.hpp \
        boost/type_traits/is_same.hpp \
        boost/type_traits/is_scalar.hpp \
        boost/type_traits/is_signed.hpp \
        boost/type_traits/is_stateless.hpp \
        boost/type_traits/is_union.hpp \
        boost/type_traits/is_unsigned.hpp \
        boost/type_traits/is_virtual_base_of.hpp \
        boost/type_traits/is_void.hpp \
        boost/type_traits/is_volatile.hpp \
        boost/type_traits/make_signed.hpp \
        boost/type_traits/make_unsigned.hpp \
        boost/type_traits/promote.hpp \
        boost/type_traits/rank.hpp \
        boost/type_traits/remove_all_extents.hpp \
        boost/type_traits/remove_bounds.hpp \
        boost/type_traits/remove_const.hpp \
        boost/type_traits/remove_cv.hpp \
        boost/type_traits/remove_extent.hpp \
        boost/type_traits/remove_pointer.hpp \
        boost/type_traits/remove_reference.hpp \
        boost/type_traits/remove_volatile.hpp \
        boost/type_traits/type_with_alignment.hpp \
        boost/type_traits.hpp \
        boost/typeof/message.hpp \
        boost/typeof/native.hpp \
        boost/typeof/typeof.hpp \
        boost/utility/addressof.hpp \
        boost/utility/declval.hpp \
        boost/utility/enable_if.hpp \
        boost/version.hpp
endif
