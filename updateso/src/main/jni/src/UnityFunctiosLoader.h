
mil2cpp_api_register_symbols_ptr = (il2cpp_api_register_symbols_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_api_register_symbols");
if(NULL == mil2cpp_api_register_symbols_ptr)
{
	LOGE("mil2cpp_api_register_symbols_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_api_register_symbols_ptr load success");
}
mil2cpp_api_lookup_symbol_ptr = (il2cpp_api_lookup_symbol_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_api_lookup_symbol");
if(NULL == mil2cpp_api_lookup_symbol_ptr)
{
	LOGE("mil2cpp_api_lookup_symbol_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_api_lookup_symbol_ptr load success");
}
mil2cpp_init_ptr = (il2cpp_init_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_init");
if(NULL == mil2cpp_init_ptr)
{
	LOGE("mil2cpp_init_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_init_ptr load success");
}
mil2cpp_init_utf16_ptr = (il2cpp_init_utf16_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_init_utf16");
if(NULL == mil2cpp_init_utf16_ptr)
{
	LOGE("mil2cpp_init_utf16_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_init_utf16_ptr load success");
}
mil2cpp_shutdown_ptr = (il2cpp_shutdown_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_shutdown");
if(NULL == mil2cpp_shutdown_ptr)
{
	LOGE("mil2cpp_shutdown_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_shutdown_ptr load success");
}
mil2cpp_set_config_dir_ptr = (il2cpp_set_config_dir_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_config_dir");
if(NULL == mil2cpp_set_config_dir_ptr)
{
	LOGE("mil2cpp_set_config_dir_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_config_dir_ptr load success");
}
mil2cpp_set_data_dir_ptr = (il2cpp_set_data_dir_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_data_dir");
if(NULL == mil2cpp_set_data_dir_ptr)
{
	LOGE("mil2cpp_set_data_dir_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_data_dir_ptr load success");
}
mil2cpp_set_temp_dir_ptr = (il2cpp_set_temp_dir_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_temp_dir");
if(NULL == mil2cpp_set_temp_dir_ptr)
{
	LOGE("mil2cpp_set_temp_dir_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_temp_dir_ptr load success");
}
mil2cpp_set_commandline_arguments_ptr = (il2cpp_set_commandline_arguments_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_commandline_arguments");
if(NULL == mil2cpp_set_commandline_arguments_ptr)
{
	LOGE("mil2cpp_set_commandline_arguments_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_commandline_arguments_ptr load success");
}
mil2cpp_set_commandline_arguments_utf16_ptr = (il2cpp_set_commandline_arguments_utf16_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_commandline_arguments_utf16");
if(NULL == mil2cpp_set_commandline_arguments_utf16_ptr)
{
	LOGE("mil2cpp_set_commandline_arguments_utf16_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_commandline_arguments_utf16_ptr load success");
}
mil2cpp_set_config_utf16_ptr = (il2cpp_set_config_utf16_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_config_utf16");
if(NULL == mil2cpp_set_config_utf16_ptr)
{
	LOGE("mil2cpp_set_config_utf16_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_config_utf16_ptr load success");
}
mil2cpp_set_config_ptr = (il2cpp_set_config_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_config");
if(NULL == mil2cpp_set_config_ptr)
{
	LOGE("mil2cpp_set_config_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_config_ptr load success");
}
mil2cpp_set_memory_callbacks_ptr = (il2cpp_set_memory_callbacks_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_memory_callbacks");
if(NULL == mil2cpp_set_memory_callbacks_ptr)
{
	LOGE("mil2cpp_set_memory_callbacks_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_memory_callbacks_ptr load success");
}
mil2cpp_get_corlib_ptr = (il2cpp_get_corlib_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_get_corlib");
if(NULL == mil2cpp_get_corlib_ptr)
{
	LOGE("mil2cpp_get_corlib_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_get_corlib_ptr load success");
}
mil2cpp_add_internal_call_ptr = (il2cpp_add_internal_call_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_add_internal_call");
if(NULL == mil2cpp_add_internal_call_ptr)
{
	LOGE("mil2cpp_add_internal_call_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_add_internal_call_ptr load success");
}
mil2cpp_resolve_icall_ptr = (il2cpp_resolve_icall_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_resolve_icall");
if(NULL == mil2cpp_resolve_icall_ptr)
{
	LOGE("mil2cpp_resolve_icall_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_resolve_icall_ptr load success");
}
mil2cpp_alloc_ptr = (il2cpp_alloc_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_alloc");
if(NULL == mil2cpp_alloc_ptr)
{
	LOGE("mil2cpp_alloc_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_alloc_ptr load success");
}
mil2cpp_free_ptr = (il2cpp_free_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_free");
if(NULL == mil2cpp_free_ptr)
{
	LOGE("mil2cpp_free_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_free_ptr load success");
}
mil2cpp_array_class_get_ptr = (il2cpp_array_class_get_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_class_get");
if(NULL == mil2cpp_array_class_get_ptr)
{
	LOGE("mil2cpp_array_class_get_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_class_get_ptr load success");
}
mil2cpp_array_length_ptr = (il2cpp_array_length_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_length");
if(NULL == mil2cpp_array_length_ptr)
{
	LOGE("mil2cpp_array_length_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_length_ptr load success");
}
mil2cpp_array_get_byte_length_ptr = (il2cpp_array_get_byte_length_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_get_byte_length");
if(NULL == mil2cpp_array_get_byte_length_ptr)
{
	LOGE("mil2cpp_array_get_byte_length_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_get_byte_length_ptr load success");
}
mil2cpp_array_new_ptr = (il2cpp_array_new_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_new");
if(NULL == mil2cpp_array_new_ptr)
{
	LOGE("mil2cpp_array_new_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_new_ptr load success");
}
mil2cpp_array_new_specific_ptr = (il2cpp_array_new_specific_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_new_specific");
if(NULL == mil2cpp_array_new_specific_ptr)
{
	LOGE("mil2cpp_array_new_specific_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_new_specific_ptr load success");
}
mil2cpp_array_new_full_ptr = (il2cpp_array_new_full_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_new_full");
if(NULL == mil2cpp_array_new_full_ptr)
{
	LOGE("mil2cpp_array_new_full_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_new_full_ptr load success");
}
mil2cpp_bounded_array_class_get_ptr = (il2cpp_bounded_array_class_get_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_bounded_array_class_get");
if(NULL == mil2cpp_bounded_array_class_get_ptr)
{
	LOGE("mil2cpp_bounded_array_class_get_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_bounded_array_class_get_ptr load success");
}
mil2cpp_array_element_size_ptr = (il2cpp_array_element_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_array_element_size");
if(NULL == mil2cpp_array_element_size_ptr)
{
	LOGE("mil2cpp_array_element_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_array_element_size_ptr load success");
}
mil2cpp_assembly_get_image_ptr = (il2cpp_assembly_get_image_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_assembly_get_image");
if(NULL == mil2cpp_assembly_get_image_ptr)
{
	LOGE("mil2cpp_assembly_get_image_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_assembly_get_image_ptr load success");
}
mil2cpp_class_enum_basetype_ptr = (il2cpp_class_enum_basetype_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_enum_basetype");
if(NULL == mil2cpp_class_enum_basetype_ptr)
{
	LOGE("mil2cpp_class_enum_basetype_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_enum_basetype_ptr load success");
}
mil2cpp_class_from_system_type_ptr = (il2cpp_class_from_system_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_from_system_type");
if(NULL == mil2cpp_class_from_system_type_ptr)
{
	LOGE("mil2cpp_class_from_system_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_from_system_type_ptr load success");
}
mil2cpp_class_is_generic_ptr = (il2cpp_class_is_generic_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_generic");
if(NULL == mil2cpp_class_is_generic_ptr)
{
	LOGE("mil2cpp_class_is_generic_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_generic_ptr load success");
}
mil2cpp_class_is_inflated_ptr = (il2cpp_class_is_inflated_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_inflated");
if(NULL == mil2cpp_class_is_inflated_ptr)
{
	LOGE("mil2cpp_class_is_inflated_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_inflated_ptr load success");
}
mil2cpp_class_is_assignable_from_ptr = (il2cpp_class_is_assignable_from_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_assignable_from");
if(NULL == mil2cpp_class_is_assignable_from_ptr)
{
	LOGE("mil2cpp_class_is_assignable_from_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_assignable_from_ptr load success");
}
mil2cpp_class_is_subclass_of_ptr = (il2cpp_class_is_subclass_of_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_subclass_of");
if(NULL == mil2cpp_class_is_subclass_of_ptr)
{
	LOGE("mil2cpp_class_is_subclass_of_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_subclass_of_ptr load success");
}
mil2cpp_class_has_parent_ptr = (il2cpp_class_has_parent_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_has_parent");
if(NULL == mil2cpp_class_has_parent_ptr)
{
	LOGE("mil2cpp_class_has_parent_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_has_parent_ptr load success");
}
mil2cpp_class_from_il2cpp_type_ptr = (il2cpp_class_from_il2cpp_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_from_il2cpp_type");
if(NULL == mil2cpp_class_from_il2cpp_type_ptr)
{
	LOGE("mil2cpp_class_from_il2cpp_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_from_il2cpp_type_ptr load success");
}
mil2cpp_class_from_name_ptr = (il2cpp_class_from_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_from_name");
if(NULL == mil2cpp_class_from_name_ptr)
{
	LOGE("mil2cpp_class_from_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_from_name_ptr load success");
}
mil2cpp_class_get_element_class_ptr = (il2cpp_class_get_element_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_element_class");
if(NULL == mil2cpp_class_get_element_class_ptr)
{
	LOGE("mil2cpp_class_get_element_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_element_class_ptr load success");
}
mil2cpp_class_get_events_ptr = (il2cpp_class_get_events_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_events");
if(NULL == mil2cpp_class_get_events_ptr)
{
	LOGE("mil2cpp_class_get_events_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_events_ptr load success");
}
mil2cpp_class_get_fields_ptr = (il2cpp_class_get_fields_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_fields");
if(NULL == mil2cpp_class_get_fields_ptr)
{
	LOGE("mil2cpp_class_get_fields_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_fields_ptr load success");
}
mil2cpp_class_get_nested_types_ptr = (il2cpp_class_get_nested_types_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_nested_types");
if(NULL == mil2cpp_class_get_nested_types_ptr)
{
	LOGE("mil2cpp_class_get_nested_types_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_nested_types_ptr load success");
}
mil2cpp_class_get_interfaces_ptr = (il2cpp_class_get_interfaces_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_interfaces");
if(NULL == mil2cpp_class_get_interfaces_ptr)
{
	LOGE("mil2cpp_class_get_interfaces_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_interfaces_ptr load success");
}
mil2cpp_class_get_properties_ptr = (il2cpp_class_get_properties_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_properties");
if(NULL == mil2cpp_class_get_properties_ptr)
{
	LOGE("mil2cpp_class_get_properties_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_properties_ptr load success");
}
mil2cpp_class_get_property_from_name_ptr = (il2cpp_class_get_property_from_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_property_from_name");
if(NULL == mil2cpp_class_get_property_from_name_ptr)
{
	LOGE("mil2cpp_class_get_property_from_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_property_from_name_ptr load success");
}
mil2cpp_class_get_field_from_name_ptr = (il2cpp_class_get_field_from_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_field_from_name");
if(NULL == mil2cpp_class_get_field_from_name_ptr)
{
	LOGE("mil2cpp_class_get_field_from_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_field_from_name_ptr load success");
}
mil2cpp_class_get_methods_ptr = (il2cpp_class_get_methods_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_methods");
if(NULL == mil2cpp_class_get_methods_ptr)
{
	LOGE("mil2cpp_class_get_methods_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_methods_ptr load success");
}
mil2cpp_class_get_method_from_name_ptr = (il2cpp_class_get_method_from_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_method_from_name");
if(NULL == mil2cpp_class_get_method_from_name_ptr)
{
	LOGE("mil2cpp_class_get_method_from_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_method_from_name_ptr load success");
}
mil2cpp_class_get_name_ptr = (il2cpp_class_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_name");
if(NULL == mil2cpp_class_get_name_ptr)
{
	LOGE("mil2cpp_class_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_name_ptr load success");
}
mil2cpp_class_get_namespace_ptr = (il2cpp_class_get_namespace_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_namespace");
if(NULL == mil2cpp_class_get_namespace_ptr)
{
	LOGE("mil2cpp_class_get_namespace_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_namespace_ptr load success");
}
mil2cpp_class_get_parent_ptr = (il2cpp_class_get_parent_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_parent");
if(NULL == mil2cpp_class_get_parent_ptr)
{
	LOGE("mil2cpp_class_get_parent_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_parent_ptr load success");
}
mil2cpp_class_get_declaring_type_ptr = (il2cpp_class_get_declaring_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_declaring_type");
if(NULL == mil2cpp_class_get_declaring_type_ptr)
{
	LOGE("mil2cpp_class_get_declaring_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_declaring_type_ptr load success");
}
mil2cpp_class_instance_size_ptr = (il2cpp_class_instance_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_instance_size");
if(NULL == mil2cpp_class_instance_size_ptr)
{
	LOGE("mil2cpp_class_instance_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_instance_size_ptr load success");
}
mil2cpp_class_num_fields_ptr = (il2cpp_class_num_fields_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_num_fields");
if(NULL == mil2cpp_class_num_fields_ptr)
{
	LOGE("mil2cpp_class_num_fields_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_num_fields_ptr load success");
}
mil2cpp_class_is_valuetype_ptr = (il2cpp_class_is_valuetype_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_valuetype");
if(NULL == mil2cpp_class_is_valuetype_ptr)
{
	LOGE("mil2cpp_class_is_valuetype_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_valuetype_ptr load success");
}
mil2cpp_class_is_blittable_ptr = (il2cpp_class_is_blittable_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_blittable");
if(NULL == mil2cpp_class_is_blittable_ptr)
{
	LOGE("mil2cpp_class_is_blittable_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_blittable_ptr load success");
}
mil2cpp_class_value_size_ptr = (il2cpp_class_value_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_value_size");
if(NULL == mil2cpp_class_value_size_ptr)
{
	LOGE("mil2cpp_class_value_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_value_size_ptr load success");
}
mil2cpp_class_get_flags_ptr = (il2cpp_class_get_flags_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_flags");
if(NULL == mil2cpp_class_get_flags_ptr)
{
	LOGE("mil2cpp_class_get_flags_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_flags_ptr load success");
}
mil2cpp_class_is_abstract_ptr = (il2cpp_class_is_abstract_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_abstract");
if(NULL == mil2cpp_class_is_abstract_ptr)
{
	LOGE("mil2cpp_class_is_abstract_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_abstract_ptr load success");
}
mil2cpp_class_is_interface_ptr = (il2cpp_class_is_interface_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_interface");
if(NULL == mil2cpp_class_is_interface_ptr)
{
	LOGE("mil2cpp_class_is_interface_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_interface_ptr load success");
}
mil2cpp_class_array_element_size_ptr = (il2cpp_class_array_element_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_array_element_size");
if(NULL == mil2cpp_class_array_element_size_ptr)
{
	LOGE("mil2cpp_class_array_element_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_array_element_size_ptr load success");
}
mil2cpp_class_from_type_ptr = (il2cpp_class_from_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_from_type");
if(NULL == mil2cpp_class_from_type_ptr)
{
	LOGE("mil2cpp_class_from_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_from_type_ptr load success");
}
mil2cpp_class_get_type_ptr = (il2cpp_class_get_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_type");
if(NULL == mil2cpp_class_get_type_ptr)
{
	LOGE("mil2cpp_class_get_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_type_ptr load success");
}
mil2cpp_class_get_type_token_ptr = (il2cpp_class_get_type_token_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_type_token");
if(NULL == mil2cpp_class_get_type_token_ptr)
{
	LOGE("mil2cpp_class_get_type_token_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_type_token_ptr load success");
}
mil2cpp_class_has_attribute_ptr = (il2cpp_class_has_attribute_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_has_attribute");
if(NULL == mil2cpp_class_has_attribute_ptr)
{
	LOGE("mil2cpp_class_has_attribute_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_has_attribute_ptr load success");
}
mil2cpp_class_has_references_ptr = (il2cpp_class_has_references_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_has_references");
if(NULL == mil2cpp_class_has_references_ptr)
{
	LOGE("mil2cpp_class_has_references_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_has_references_ptr load success");
}
mil2cpp_class_is_enum_ptr = (il2cpp_class_is_enum_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_is_enum");
if(NULL == mil2cpp_class_is_enum_ptr)
{
	LOGE("mil2cpp_class_is_enum_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_is_enum_ptr load success");
}
mil2cpp_class_get_image_ptr = (il2cpp_class_get_image_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_image");
if(NULL == mil2cpp_class_get_image_ptr)
{
	LOGE("mil2cpp_class_get_image_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_image_ptr load success");
}
mil2cpp_class_get_assemblyname_ptr = (il2cpp_class_get_assemblyname_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_assemblyname");
if(NULL == mil2cpp_class_get_assemblyname_ptr)
{
	LOGE("mil2cpp_class_get_assemblyname_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_assemblyname_ptr load success");
}
mil2cpp_class_get_rank_ptr = (il2cpp_class_get_rank_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_rank");
if(NULL == mil2cpp_class_get_rank_ptr)
{
	LOGE("mil2cpp_class_get_rank_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_rank_ptr load success");
}
mil2cpp_class_get_bitmap_size_ptr = (il2cpp_class_get_bitmap_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_bitmap_size");
if(NULL == mil2cpp_class_get_bitmap_size_ptr)
{
	LOGE("mil2cpp_class_get_bitmap_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_bitmap_size_ptr load success");
}
mil2cpp_class_get_bitmap_ptr = (il2cpp_class_get_bitmap_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_class_get_bitmap");
if(NULL == mil2cpp_class_get_bitmap_ptr)
{
	LOGE("mil2cpp_class_get_bitmap_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_class_get_bitmap_ptr load success");
}
mil2cpp_stats_dump_to_file_ptr = (il2cpp_stats_dump_to_file_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_stats_dump_to_file");
if(NULL == mil2cpp_stats_dump_to_file_ptr)
{
	LOGE("mil2cpp_stats_dump_to_file_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_stats_dump_to_file_ptr load success");
}
mil2cpp_stats_get_value_ptr = (il2cpp_stats_get_value_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_stats_get_value");
if(NULL == mil2cpp_stats_get_value_ptr)
{
	LOGE("mil2cpp_stats_get_value_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_stats_get_value_ptr load success");
}
mil2cpp_domain_get_ptr = (il2cpp_domain_get_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_domain_get");
if(NULL == mil2cpp_domain_get_ptr)
{
	LOGE("mil2cpp_domain_get_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_domain_get_ptr load success");
}
mil2cpp_domain_assembly_open_ptr = (il2cpp_domain_assembly_open_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_domain_assembly_open");
if(NULL == mil2cpp_domain_assembly_open_ptr)
{
	LOGE("mil2cpp_domain_assembly_open_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_domain_assembly_open_ptr load success");
}
mil2cpp_domain_get_assemblies_ptr = (il2cpp_domain_get_assemblies_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_domain_get_assemblies");
if(NULL == mil2cpp_domain_get_assemblies_ptr)
{
	LOGE("mil2cpp_domain_get_assemblies_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_domain_get_assemblies_ptr load success");
}
mil2cpp_raise_exception_ptr = (il2cpp_raise_exception_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_raise_exception");
if(NULL == mil2cpp_raise_exception_ptr)
{
	LOGE("mil2cpp_raise_exception_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_raise_exception_ptr load success");
}
mil2cpp_exception_from_name_msg_ptr = (il2cpp_exception_from_name_msg_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_exception_from_name_msg");
if(NULL == mil2cpp_exception_from_name_msg_ptr)
{
	LOGE("mil2cpp_exception_from_name_msg_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_exception_from_name_msg_ptr load success");
}
mil2cpp_get_exception_argument_null_ptr = (il2cpp_get_exception_argument_null_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_get_exception_argument_null");
if(NULL == mil2cpp_get_exception_argument_null_ptr)
{
	LOGE("mil2cpp_get_exception_argument_null_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_get_exception_argument_null_ptr load success");
}
mil2cpp_format_exception_ptr = (il2cpp_format_exception_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_format_exception");
if(NULL == mil2cpp_format_exception_ptr)
{
	LOGE("mil2cpp_format_exception_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_format_exception_ptr load success");
}
mil2cpp_format_stack_trace_ptr = (il2cpp_format_stack_trace_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_format_stack_trace");
if(NULL == mil2cpp_format_stack_trace_ptr)
{
	LOGE("mil2cpp_format_stack_trace_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_format_stack_trace_ptr load success");
}
mil2cpp_unhandled_exception_ptr = (il2cpp_unhandled_exception_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unhandled_exception");
if(NULL == mil2cpp_unhandled_exception_ptr)
{
	LOGE("mil2cpp_unhandled_exception_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unhandled_exception_ptr load success");
}
mil2cpp_field_get_name_ptr = (il2cpp_field_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_name");
if(NULL == mil2cpp_field_get_name_ptr)
{
	LOGE("mil2cpp_field_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_name_ptr load success");
}
mil2cpp_field_get_flags_ptr = (il2cpp_field_get_flags_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_flags");
if(NULL == mil2cpp_field_get_flags_ptr)
{
	LOGE("mil2cpp_field_get_flags_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_flags_ptr load success");
}
mil2cpp_field_get_parent_ptr = (il2cpp_field_get_parent_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_parent");
if(NULL == mil2cpp_field_get_parent_ptr)
{
	LOGE("mil2cpp_field_get_parent_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_parent_ptr load success");
}
mil2cpp_field_get_offset_ptr = (il2cpp_field_get_offset_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_offset");
if(NULL == mil2cpp_field_get_offset_ptr)
{
	LOGE("mil2cpp_field_get_offset_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_offset_ptr load success");
}
mil2cpp_field_get_type_ptr = (il2cpp_field_get_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_type");
if(NULL == mil2cpp_field_get_type_ptr)
{
	LOGE("mil2cpp_field_get_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_type_ptr load success");
}
mil2cpp_field_get_value_ptr = (il2cpp_field_get_value_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_value");
if(NULL == mil2cpp_field_get_value_ptr)
{
	LOGE("mil2cpp_field_get_value_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_value_ptr load success");
}
mil2cpp_field_get_value_object_ptr = (il2cpp_field_get_value_object_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_get_value_object");
if(NULL == mil2cpp_field_get_value_object_ptr)
{
	LOGE("mil2cpp_field_get_value_object_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_get_value_object_ptr load success");
}
mil2cpp_field_has_attribute_ptr = (il2cpp_field_has_attribute_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_has_attribute");
if(NULL == mil2cpp_field_has_attribute_ptr)
{
	LOGE("mil2cpp_field_has_attribute_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_has_attribute_ptr load success");
}
mil2cpp_field_set_value_ptr = (il2cpp_field_set_value_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_set_value");
if(NULL == mil2cpp_field_set_value_ptr)
{
	LOGE("mil2cpp_field_set_value_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_set_value_ptr load success");
}
mil2cpp_field_set_value_object_ptr = (il2cpp_field_set_value_object_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_set_value_object");
if(NULL == mil2cpp_field_set_value_object_ptr)
{
	LOGE("mil2cpp_field_set_value_object_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_set_value_object_ptr load success");
}
mil2cpp_field_static_get_value_ptr = (il2cpp_field_static_get_value_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_static_get_value");
if(NULL == mil2cpp_field_static_get_value_ptr)
{
	LOGE("mil2cpp_field_static_get_value_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_static_get_value_ptr load success");
}
mil2cpp_field_static_set_value_ptr = (il2cpp_field_static_set_value_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_field_static_set_value");
if(NULL == mil2cpp_field_static_set_value_ptr)
{
	LOGE("mil2cpp_field_static_set_value_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_field_static_set_value_ptr load success");
}
mil2cpp_gc_collect_ptr = (il2cpp_gc_collect_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_collect");
if(NULL == mil2cpp_gc_collect_ptr)
{
	LOGE("mil2cpp_gc_collect_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_collect_ptr load success");
}
mil2cpp_gc_collect_a_little_ptr = (il2cpp_gc_collect_a_little_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_collect_a_little");
if(NULL == mil2cpp_gc_collect_a_little_ptr)
{
	LOGE("mil2cpp_gc_collect_a_little_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_collect_a_little_ptr load success");
}
mil2cpp_gc_enable_ptr = (il2cpp_gc_enable_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_enable");
if(NULL == mil2cpp_gc_enable_ptr)
{
	LOGE("mil2cpp_gc_enable_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_enable_ptr load success");
}
mil2cpp_gc_disable_ptr = (il2cpp_gc_disable_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_disable");
if(NULL == mil2cpp_gc_disable_ptr)
{
	LOGE("mil2cpp_gc_disable_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_disable_ptr load success");
}
mil2cpp_gc_is_disabled_ptr = (il2cpp_gc_is_disabled_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_is_disabled");
if(NULL == mil2cpp_gc_is_disabled_ptr)
{
	LOGE("mil2cpp_gc_is_disabled_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_is_disabled_ptr load success");
}
mil2cpp_gc_get_used_size_ptr = (il2cpp_gc_get_used_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_get_used_size");
if(NULL == mil2cpp_gc_get_used_size_ptr)
{
	LOGE("mil2cpp_gc_get_used_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_get_used_size_ptr load success");
}
mil2cpp_gc_get_heap_size_ptr = (il2cpp_gc_get_heap_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_get_heap_size");
if(NULL == mil2cpp_gc_get_heap_size_ptr)
{
	LOGE("mil2cpp_gc_get_heap_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_get_heap_size_ptr load success");
}
mil2cpp_gchandle_new_ptr = (il2cpp_gchandle_new_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gchandle_new");
if(NULL == mil2cpp_gchandle_new_ptr)
{
	LOGE("mil2cpp_gchandle_new_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gchandle_new_ptr load success");
}
mil2cpp_gchandle_new_weakref_ptr = (il2cpp_gchandle_new_weakref_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gchandle_new_weakref");
if(NULL == mil2cpp_gchandle_new_weakref_ptr)
{
	LOGE("mil2cpp_gchandle_new_weakref_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gchandle_new_weakref_ptr load success");
}
mil2cpp_gchandle_get_target_ptr = (il2cpp_gchandle_get_target_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gchandle_get_target");
if(NULL == mil2cpp_gchandle_get_target_ptr)
{
	LOGE("mil2cpp_gchandle_get_target_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gchandle_get_target_ptr load success");
}
mil2cpp_gc_wbarrier_set_field_ptr = (il2cpp_gc_wbarrier_set_field_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gc_wbarrier_set_field");
if(NULL == mil2cpp_gc_wbarrier_set_field_ptr)
{
	LOGE("mil2cpp_gc_wbarrier_set_field_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gc_wbarrier_set_field_ptr load success");
}
mil2cpp_gchandle_free_ptr = (il2cpp_gchandle_free_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_gchandle_free");
if(NULL == mil2cpp_gchandle_free_ptr)
{
	LOGE("mil2cpp_gchandle_free_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_gchandle_free_ptr load success");
}
mil2cpp_unity_liveness_calculation_begin_ptr = (il2cpp_unity_liveness_calculation_begin_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unity_liveness_calculation_begin");
if(NULL == mil2cpp_unity_liveness_calculation_begin_ptr)
{
	LOGE("mil2cpp_unity_liveness_calculation_begin_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unity_liveness_calculation_begin_ptr load success");
}
mil2cpp_unity_liveness_calculation_end_ptr = (il2cpp_unity_liveness_calculation_end_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unity_liveness_calculation_end");
if(NULL == mil2cpp_unity_liveness_calculation_end_ptr)
{
	LOGE("mil2cpp_unity_liveness_calculation_end_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unity_liveness_calculation_end_ptr load success");
}
mil2cpp_unity_liveness_calculation_from_root_ptr = (il2cpp_unity_liveness_calculation_from_root_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unity_liveness_calculation_from_root");
if(NULL == mil2cpp_unity_liveness_calculation_from_root_ptr)
{
	LOGE("mil2cpp_unity_liveness_calculation_from_root_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unity_liveness_calculation_from_root_ptr load success");
}
mil2cpp_unity_liveness_calculation_from_statics_ptr = (il2cpp_unity_liveness_calculation_from_statics_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unity_liveness_calculation_from_statics");
if(NULL == mil2cpp_unity_liveness_calculation_from_statics_ptr)
{
	LOGE("mil2cpp_unity_liveness_calculation_from_statics_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unity_liveness_calculation_from_statics_ptr load success");
}
mil2cpp_method_get_return_type_ptr = (il2cpp_method_get_return_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_return_type");
if(NULL == mil2cpp_method_get_return_type_ptr)
{
	LOGE("mil2cpp_method_get_return_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_return_type_ptr load success");
}
mil2cpp_method_get_from_reflection_ptr = (il2cpp_method_get_from_reflection_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_from_reflection");
if(NULL == mil2cpp_method_get_from_reflection_ptr)
{
	LOGE("mil2cpp_method_get_from_reflection_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_from_reflection_ptr load success");
}
mil2cpp_method_get_object_ptr = (il2cpp_method_get_object_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_object");
if(NULL == mil2cpp_method_get_object_ptr)
{
	LOGE("mil2cpp_method_get_object_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_object_ptr load success");
}
mil2cpp_method_get_name_ptr = (il2cpp_method_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_name");
if(NULL == mil2cpp_method_get_name_ptr)
{
	LOGE("mil2cpp_method_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_name_ptr load success");
}
mil2cpp_method_is_generic_ptr = (il2cpp_method_is_generic_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_is_generic");
if(NULL == mil2cpp_method_is_generic_ptr)
{
	LOGE("mil2cpp_method_is_generic_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_is_generic_ptr load success");
}
mil2cpp_method_is_inflated_ptr = (il2cpp_method_is_inflated_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_is_inflated");
if(NULL == mil2cpp_method_is_inflated_ptr)
{
	LOGE("mil2cpp_method_is_inflated_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_is_inflated_ptr load success");
}
mil2cpp_method_is_instance_ptr = (il2cpp_method_is_instance_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_is_instance");
if(NULL == mil2cpp_method_is_instance_ptr)
{
	LOGE("mil2cpp_method_is_instance_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_is_instance_ptr load success");
}
mil2cpp_method_get_param_count_ptr = (il2cpp_method_get_param_count_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_param_count");
if(NULL == mil2cpp_method_get_param_count_ptr)
{
	LOGE("mil2cpp_method_get_param_count_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_param_count_ptr load success");
}
mil2cpp_method_get_param_ptr = (il2cpp_method_get_param_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_param");
if(NULL == mil2cpp_method_get_param_ptr)
{
	LOGE("mil2cpp_method_get_param_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_param_ptr load success");
}
mil2cpp_method_get_class_ptr = (il2cpp_method_get_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_class");
if(NULL == mil2cpp_method_get_class_ptr)
{
	LOGE("mil2cpp_method_get_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_class_ptr load success");
}
mil2cpp_method_has_attribute_ptr = (il2cpp_method_has_attribute_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_has_attribute");
if(NULL == mil2cpp_method_has_attribute_ptr)
{
	LOGE("mil2cpp_method_has_attribute_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_has_attribute_ptr load success");
}
mil2cpp_method_get_declaring_type_ptr = (il2cpp_method_get_declaring_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_declaring_type");
if(NULL == mil2cpp_method_get_declaring_type_ptr)
{
	LOGE("mil2cpp_method_get_declaring_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_declaring_type_ptr load success");
}
mil2cpp_method_get_flags_ptr = (il2cpp_method_get_flags_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_flags");
if(NULL == mil2cpp_method_get_flags_ptr)
{
	LOGE("mil2cpp_method_get_flags_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_flags_ptr load success");
}
mil2cpp_method_get_token_ptr = (il2cpp_method_get_token_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_token");
if(NULL == mil2cpp_method_get_token_ptr)
{
	LOGE("mil2cpp_method_get_token_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_token_ptr load success");
}
mil2cpp_method_get_param_name_ptr = (il2cpp_method_get_param_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_method_get_param_name");
if(NULL == mil2cpp_method_get_param_name_ptr)
{
	LOGE("mil2cpp_method_get_param_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_method_get_param_name_ptr load success");
}
mil2cpp_profiler_install_ptr = (il2cpp_profiler_install_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install");
if(NULL == mil2cpp_profiler_install_ptr)
{
	LOGE("mil2cpp_profiler_install_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_ptr load success");
}
mil2cpp_profiler_set_events_ptr = (il2cpp_profiler_set_events_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_set_events");
if(NULL == mil2cpp_profiler_set_events_ptr)
{
	LOGE("mil2cpp_profiler_set_events_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_set_events_ptr load success");
}
mil2cpp_profiler_install_enter_leave_ptr = (il2cpp_profiler_install_enter_leave_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install_enter_leave");
if(NULL == mil2cpp_profiler_install_enter_leave_ptr)
{
	LOGE("mil2cpp_profiler_install_enter_leave_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_enter_leave_ptr load success");
}
mil2cpp_profiler_install_allocation_ptr = (il2cpp_profiler_install_allocation_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install_allocation");
if(NULL == mil2cpp_profiler_install_allocation_ptr)
{
	LOGE("mil2cpp_profiler_install_allocation_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_allocation_ptr load success");
}
mil2cpp_profiler_install_gc_ptr = (il2cpp_profiler_install_gc_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install_gc");
if(NULL == mil2cpp_profiler_install_gc_ptr)
{
	LOGE("mil2cpp_profiler_install_gc_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_gc_ptr load success");
}
mil2cpp_profiler_install_fileio_ptr = (il2cpp_profiler_install_fileio_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install_fileio");
if(NULL == mil2cpp_profiler_install_fileio_ptr)
{
	LOGE("mil2cpp_profiler_install_fileio_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_fileio_ptr load success");
}
mil2cpp_profiler_install_thread_ptr = (il2cpp_profiler_install_thread_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_profiler_install_thread");
if(NULL == mil2cpp_profiler_install_thread_ptr)
{
	LOGE("mil2cpp_profiler_install_thread_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_profiler_install_thread_ptr load success");
}
mil2cpp_property_get_name_ptr = (il2cpp_property_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_property_get_name");
if(NULL == mil2cpp_property_get_name_ptr)
{
	LOGE("mil2cpp_property_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_property_get_name_ptr load success");
}
mil2cpp_property_get_get_method_ptr = (il2cpp_property_get_get_method_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_property_get_get_method");
if(NULL == mil2cpp_property_get_get_method_ptr)
{
	LOGE("mil2cpp_property_get_get_method_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_property_get_get_method_ptr load success");
}
mil2cpp_property_get_set_method_ptr = (il2cpp_property_get_set_method_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_property_get_set_method");
if(NULL == mil2cpp_property_get_set_method_ptr)
{
	LOGE("mil2cpp_property_get_set_method_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_property_get_set_method_ptr load success");
}
mil2cpp_property_get_parent_ptr = (il2cpp_property_get_parent_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_property_get_parent");
if(NULL == mil2cpp_property_get_parent_ptr)
{
	LOGE("mil2cpp_property_get_parent_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_property_get_parent_ptr load success");
}
mil2cpp_property_get_flags_ptr = (il2cpp_property_get_flags_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_property_get_flags");
if(NULL == mil2cpp_property_get_flags_ptr)
{
	LOGE("mil2cpp_property_get_flags_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_property_get_flags_ptr load success");
}
mil2cpp_object_get_class_ptr = (il2cpp_object_get_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_object_get_class");
if(NULL == mil2cpp_object_get_class_ptr)
{
	LOGE("mil2cpp_object_get_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_object_get_class_ptr load success");
}
mil2cpp_object_get_size_ptr = (il2cpp_object_get_size_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_object_get_size");
if(NULL == mil2cpp_object_get_size_ptr)
{
	LOGE("mil2cpp_object_get_size_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_object_get_size_ptr load success");
}
mil2cpp_object_get_virtual_method_ptr = (il2cpp_object_get_virtual_method_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_object_get_virtual_method");
if(NULL == mil2cpp_object_get_virtual_method_ptr)
{
	LOGE("mil2cpp_object_get_virtual_method_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_object_get_virtual_method_ptr load success");
}
mil2cpp_object_new_ptr = (il2cpp_object_new_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_object_new");
if(NULL == mil2cpp_object_new_ptr)
{
	LOGE("mil2cpp_object_new_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_object_new_ptr load success");
}
mil2cpp_object_unbox_ptr = (il2cpp_object_unbox_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_object_unbox");
if(NULL == mil2cpp_object_unbox_ptr)
{
	LOGE("mil2cpp_object_unbox_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_object_unbox_ptr load success");
}
mil2cpp_value_box_ptr = (il2cpp_value_box_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_value_box");
if(NULL == mil2cpp_value_box_ptr)
{
	LOGE("mil2cpp_value_box_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_value_box_ptr load success");
}
mil2cpp_monitor_enter_ptr = (il2cpp_monitor_enter_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_enter");
if(NULL == mil2cpp_monitor_enter_ptr)
{
	LOGE("mil2cpp_monitor_enter_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_enter_ptr load success");
}
mil2cpp_monitor_try_enter_ptr = (il2cpp_monitor_try_enter_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_try_enter");
if(NULL == mil2cpp_monitor_try_enter_ptr)
{
	LOGE("mil2cpp_monitor_try_enter_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_try_enter_ptr load success");
}
mil2cpp_monitor_exit_ptr = (il2cpp_monitor_exit_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_exit");
if(NULL == mil2cpp_monitor_exit_ptr)
{
	LOGE("mil2cpp_monitor_exit_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_exit_ptr load success");
}
mil2cpp_monitor_pulse_ptr = (il2cpp_monitor_pulse_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_pulse");
if(NULL == mil2cpp_monitor_pulse_ptr)
{
	LOGE("mil2cpp_monitor_pulse_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_pulse_ptr load success");
}
mil2cpp_monitor_pulse_all_ptr = (il2cpp_monitor_pulse_all_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_pulse_all");
if(NULL == mil2cpp_monitor_pulse_all_ptr)
{
	LOGE("mil2cpp_monitor_pulse_all_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_pulse_all_ptr load success");
}
mil2cpp_monitor_wait_ptr = (il2cpp_monitor_wait_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_wait");
if(NULL == mil2cpp_monitor_wait_ptr)
{
	LOGE("mil2cpp_monitor_wait_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_wait_ptr load success");
}
mil2cpp_monitor_try_wait_ptr = (il2cpp_monitor_try_wait_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_monitor_try_wait");
if(NULL == mil2cpp_monitor_try_wait_ptr)
{
	LOGE("mil2cpp_monitor_try_wait_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_monitor_try_wait_ptr load success");
}
mil2cpp_runtime_invoke_convert_args_ptr = (il2cpp_runtime_invoke_convert_args_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_invoke_convert_args");
if(NULL == mil2cpp_runtime_invoke_convert_args_ptr)
{
	LOGE("mil2cpp_runtime_invoke_convert_args_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_invoke_convert_args_ptr load success");
}
mil2cpp_runtime_invoke_ptr = (il2cpp_runtime_invoke_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_invoke");
if(NULL == mil2cpp_runtime_invoke_ptr)
{
	LOGE("mil2cpp_runtime_invoke_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_invoke_ptr load success");
}
mil2cpp_runtime_class_init_ptr = (il2cpp_runtime_class_init_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_class_init");
if(NULL == mil2cpp_runtime_class_init_ptr)
{
	LOGE("mil2cpp_runtime_class_init_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_class_init_ptr load success");
}
mil2cpp_runtime_object_init_ptr = (il2cpp_runtime_object_init_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_object_init");
if(NULL == mil2cpp_runtime_object_init_ptr)
{
	LOGE("mil2cpp_runtime_object_init_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_object_init_ptr load success");
}
mil2cpp_runtime_object_init_exception_ptr = (il2cpp_runtime_object_init_exception_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_object_init_exception");
if(NULL == mil2cpp_runtime_object_init_exception_ptr)
{
	LOGE("mil2cpp_runtime_object_init_exception_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_object_init_exception_ptr load success");
}
mil2cpp_runtime_unhandled_exception_policy_set_ptr = (il2cpp_runtime_unhandled_exception_policy_set_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_runtime_unhandled_exception_policy_set");
if(NULL == mil2cpp_runtime_unhandled_exception_policy_set_ptr)
{
	LOGE("mil2cpp_runtime_unhandled_exception_policy_set_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_runtime_unhandled_exception_policy_set_ptr load success");
}
mil2cpp_string_length_ptr = (il2cpp_string_length_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_length");
if(NULL == mil2cpp_string_length_ptr)
{
	LOGE("mil2cpp_string_length_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_length_ptr load success");
}
mil2cpp_string_chars_ptr = (il2cpp_string_chars_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_chars");
if(NULL == mil2cpp_string_chars_ptr)
{
	LOGE("mil2cpp_string_chars_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_chars_ptr load success");
}
mil2cpp_string_new_ptr = (il2cpp_string_new_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_new");
if(NULL == mil2cpp_string_new_ptr)
{
	LOGE("mil2cpp_string_new_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_new_ptr load success");
}
mil2cpp_string_new_wrapper_ptr = (il2cpp_string_new_wrapper_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_new_wrapper");
if(NULL == mil2cpp_string_new_wrapper_ptr)
{
	LOGE("mil2cpp_string_new_wrapper_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_new_wrapper_ptr load success");
}
mil2cpp_string_new_utf16_ptr = (il2cpp_string_new_utf16_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_new_utf16");
if(NULL == mil2cpp_string_new_utf16_ptr)
{
	LOGE("mil2cpp_string_new_utf16_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_new_utf16_ptr load success");
}
mil2cpp_string_new_len_ptr = (il2cpp_string_new_len_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_new_len");
if(NULL == mil2cpp_string_new_len_ptr)
{
	LOGE("mil2cpp_string_new_len_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_new_len_ptr load success");
}
mil2cpp_string_intern_ptr = (il2cpp_string_intern_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_intern");
if(NULL == mil2cpp_string_intern_ptr)
{
	LOGE("mil2cpp_string_intern_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_intern_ptr load success");
}
mil2cpp_string_is_interned_ptr = (il2cpp_string_is_interned_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_string_is_interned");
if(NULL == mil2cpp_string_is_interned_ptr)
{
	LOGE("mil2cpp_string_is_interned_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_string_is_interned_ptr load success");
}
mil2cpp_thread_current_ptr = (il2cpp_thread_current_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_current");
if(NULL == mil2cpp_thread_current_ptr)
{
	LOGE("mil2cpp_thread_current_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_current_ptr load success");
}
mil2cpp_thread_attach_ptr = (il2cpp_thread_attach_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_attach");
if(NULL == mil2cpp_thread_attach_ptr)
{
	LOGE("mil2cpp_thread_attach_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_attach_ptr load success");
}
mil2cpp_thread_detach_ptr = (il2cpp_thread_detach_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_detach");
if(NULL == mil2cpp_thread_detach_ptr)
{
	LOGE("mil2cpp_thread_detach_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_detach_ptr load success");
}
mil2cpp_thread_get_all_attached_threads_ptr = (il2cpp_thread_get_all_attached_threads_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_get_all_attached_threads");
if(NULL == mil2cpp_thread_get_all_attached_threads_ptr)
{
	LOGE("mil2cpp_thread_get_all_attached_threads_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_get_all_attached_threads_ptr load success");
}
mil2cpp_is_vm_thread_ptr = (il2cpp_is_vm_thread_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_is_vm_thread");
if(NULL == mil2cpp_is_vm_thread_ptr)
{
	LOGE("mil2cpp_is_vm_thread_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_is_vm_thread_ptr load success");
}
mil2cpp_current_thread_walk_frame_stack_ptr = (il2cpp_current_thread_walk_frame_stack_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_current_thread_walk_frame_stack");
if(NULL == mil2cpp_current_thread_walk_frame_stack_ptr)
{
	LOGE("mil2cpp_current_thread_walk_frame_stack_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_current_thread_walk_frame_stack_ptr load success");
}
mil2cpp_thread_walk_frame_stack_ptr = (il2cpp_thread_walk_frame_stack_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_walk_frame_stack");
if(NULL == mil2cpp_thread_walk_frame_stack_ptr)
{
	LOGE("mil2cpp_thread_walk_frame_stack_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_walk_frame_stack_ptr load success");
}
mil2cpp_current_thread_get_top_frame_ptr = (il2cpp_current_thread_get_top_frame_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_current_thread_get_top_frame");
if(NULL == mil2cpp_current_thread_get_top_frame_ptr)
{
	LOGE("mil2cpp_current_thread_get_top_frame_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_current_thread_get_top_frame_ptr load success");
}
mil2cpp_thread_get_top_frame_ptr = (il2cpp_thread_get_top_frame_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_get_top_frame");
if(NULL == mil2cpp_thread_get_top_frame_ptr)
{
	LOGE("mil2cpp_thread_get_top_frame_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_get_top_frame_ptr load success");
}
mil2cpp_current_thread_get_frame_at_ptr = (il2cpp_current_thread_get_frame_at_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_current_thread_get_frame_at");
if(NULL == mil2cpp_current_thread_get_frame_at_ptr)
{
	LOGE("mil2cpp_current_thread_get_frame_at_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_current_thread_get_frame_at_ptr load success");
}
mil2cpp_thread_get_frame_at_ptr = (il2cpp_thread_get_frame_at_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_get_frame_at");
if(NULL == mil2cpp_thread_get_frame_at_ptr)
{
	LOGE("mil2cpp_thread_get_frame_at_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_get_frame_at_ptr load success");
}
mil2cpp_current_thread_get_stack_depth_ptr = (il2cpp_current_thread_get_stack_depth_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_current_thread_get_stack_depth");
if(NULL == mil2cpp_current_thread_get_stack_depth_ptr)
{
	LOGE("mil2cpp_current_thread_get_stack_depth_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_current_thread_get_stack_depth_ptr load success");
}
mil2cpp_thread_get_stack_depth_ptr = (il2cpp_thread_get_stack_depth_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_thread_get_stack_depth");
if(NULL == mil2cpp_thread_get_stack_depth_ptr)
{
	LOGE("mil2cpp_thread_get_stack_depth_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_thread_get_stack_depth_ptr load success");
}
mil2cpp_type_get_object_ptr = (il2cpp_type_get_object_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_object");
if(NULL == mil2cpp_type_get_object_ptr)
{
	LOGE("mil2cpp_type_get_object_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_object_ptr load success");
}
mil2cpp_type_get_type_ptr = (il2cpp_type_get_type_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_type");
if(NULL == mil2cpp_type_get_type_ptr)
{
	LOGE("mil2cpp_type_get_type_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_type_ptr load success");
}
mil2cpp_type_get_class_or_element_class_ptr = (il2cpp_type_get_class_or_element_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_class_or_element_class");
if(NULL == mil2cpp_type_get_class_or_element_class_ptr)
{
	LOGE("mil2cpp_type_get_class_or_element_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_class_or_element_class_ptr load success");
}
mil2cpp_type_get_name_ptr = (il2cpp_type_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_name");
if(NULL == mil2cpp_type_get_name_ptr)
{
	LOGE("mil2cpp_type_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_name_ptr load success");
}
mil2cpp_type_get_assembly_qualified_name_ptr = (il2cpp_type_get_assembly_qualified_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_assembly_qualified_name");
if(NULL == mil2cpp_type_get_assembly_qualified_name_ptr)
{
	LOGE("mil2cpp_type_get_assembly_qualified_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_assembly_qualified_name_ptr load success");
}
mil2cpp_type_is_byref_ptr = (il2cpp_type_is_byref_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_is_byref");
if(NULL == mil2cpp_type_is_byref_ptr)
{
	LOGE("mil2cpp_type_is_byref_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_is_byref_ptr load success");
}
mil2cpp_type_get_attrs_ptr = (il2cpp_type_get_attrs_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_get_attrs");
if(NULL == mil2cpp_type_get_attrs_ptr)
{
	LOGE("mil2cpp_type_get_attrs_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_get_attrs_ptr load success");
}
mil2cpp_type_equals_ptr = (il2cpp_type_equals_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_type_equals");
if(NULL == mil2cpp_type_equals_ptr)
{
	LOGE("mil2cpp_type_equals_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_type_equals_ptr load success");
}
mil2cpp_image_get_assembly_ptr = (il2cpp_image_get_assembly_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_assembly");
if(NULL == mil2cpp_image_get_assembly_ptr)
{
	LOGE("mil2cpp_image_get_assembly_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_assembly_ptr load success");
}
mil2cpp_image_get_name_ptr = (il2cpp_image_get_name_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_name");
if(NULL == mil2cpp_image_get_name_ptr)
{
	LOGE("mil2cpp_image_get_name_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_name_ptr load success");
}
mil2cpp_image_get_filename_ptr = (il2cpp_image_get_filename_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_filename");
if(NULL == mil2cpp_image_get_filename_ptr)
{
	LOGE("mil2cpp_image_get_filename_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_filename_ptr load success");
}
mil2cpp_image_get_entry_point_ptr = (il2cpp_image_get_entry_point_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_entry_point");
if(NULL == mil2cpp_image_get_entry_point_ptr)
{
	LOGE("mil2cpp_image_get_entry_point_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_entry_point_ptr load success");
}
mil2cpp_image_get_class_count_ptr = (il2cpp_image_get_class_count_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_class_count");
if(NULL == mil2cpp_image_get_class_count_ptr)
{
	LOGE("mil2cpp_image_get_class_count_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_class_count_ptr load success");
}
mil2cpp_image_get_class_ptr = (il2cpp_image_get_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_image_get_class");
if(NULL == mil2cpp_image_get_class_ptr)
{
	LOGE("mil2cpp_image_get_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_image_get_class_ptr load success");
}
mil2cpp_capture_memory_snapshot_ptr = (il2cpp_capture_memory_snapshot_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_capture_memory_snapshot");
if(NULL == mil2cpp_capture_memory_snapshot_ptr)
{
	LOGE("mil2cpp_capture_memory_snapshot_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_capture_memory_snapshot_ptr load success");
}
mil2cpp_free_captured_memory_snapshot_ptr = (il2cpp_free_captured_memory_snapshot_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_free_captured_memory_snapshot");
if(NULL == mil2cpp_free_captured_memory_snapshot_ptr)
{
	LOGE("mil2cpp_free_captured_memory_snapshot_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_free_captured_memory_snapshot_ptr load success");
}
mil2cpp_set_find_plugin_callback_ptr = (il2cpp_set_find_plugin_callback_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_set_find_plugin_callback");
if(NULL == mil2cpp_set_find_plugin_callback_ptr)
{
	LOGE("mil2cpp_set_find_plugin_callback_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_set_find_plugin_callback_ptr load success");
}
mil2cpp_register_log_callback_ptr = (il2cpp_register_log_callback_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_register_log_callback");
if(NULL == mil2cpp_register_log_callback_ptr)
{
	LOGE("mil2cpp_register_log_callback_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_register_log_callback_ptr load success");
}
mil2cpp_debugger_set_agent_options_ptr = (il2cpp_debugger_set_agent_options_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_debugger_set_agent_options");
if(NULL == mil2cpp_debugger_set_agent_options_ptr)
{
	LOGE("mil2cpp_debugger_set_agent_options_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_debugger_set_agent_options_ptr load success");
}
mil2cpp_is_debugger_attached_ptr = (il2cpp_is_debugger_attached_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_is_debugger_attached");
if(NULL == mil2cpp_is_debugger_attached_ptr)
{
	LOGE("mil2cpp_is_debugger_attached_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_is_debugger_attached_ptr load success");
}
mil2cpp_unity_install_unitytls_interface_ptr = (il2cpp_unity_install_unitytls_interface_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_unity_install_unitytls_interface");
if(NULL == mil2cpp_unity_install_unitytls_interface_ptr)
{
	LOGE("mil2cpp_unity_install_unitytls_interface_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_unity_install_unitytls_interface_ptr load success");
}
mil2cpp_custom_attrs_from_class_ptr = (il2cpp_custom_attrs_from_class_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_from_class");
if(NULL == mil2cpp_custom_attrs_from_class_ptr)
{
	LOGE("mil2cpp_custom_attrs_from_class_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_from_class_ptr load success");
}
mil2cpp_custom_attrs_from_method_ptr = (il2cpp_custom_attrs_from_method_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_from_method");
if(NULL == mil2cpp_custom_attrs_from_method_ptr)
{
	LOGE("mil2cpp_custom_attrs_from_method_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_from_method_ptr load success");
}
mil2cpp_custom_attrs_has_attr_ptr = (il2cpp_custom_attrs_has_attr_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_has_attr");
if(NULL == mil2cpp_custom_attrs_has_attr_ptr)
{
	LOGE("mil2cpp_custom_attrs_has_attr_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_has_attr_ptr load success");
}
mil2cpp_custom_attrs_get_attr_ptr = (il2cpp_custom_attrs_get_attr_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_get_attr");
if(NULL == mil2cpp_custom_attrs_get_attr_ptr)
{
	LOGE("mil2cpp_custom_attrs_get_attr_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_get_attr_ptr load success");
}
mil2cpp_custom_attrs_construct_ptr = (il2cpp_custom_attrs_construct_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_construct");
if(NULL == mil2cpp_custom_attrs_construct_ptr)
{
	LOGE("mil2cpp_custom_attrs_construct_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_construct_ptr load success");
}
mil2cpp_custom_attrs_free_ptr = (il2cpp_custom_attrs_free_ptr)dlsym(dllIL2CPPRealHandler,"il2cpp_custom_attrs_free");
if(NULL == mil2cpp_custom_attrs_free_ptr)
{
	LOGE("mil2cpp_custom_attrs_free_ptr is null");
	//return;
}
else
{
	LOGD("mil2cpp_custom_attrs_free_ptr load success");
}
