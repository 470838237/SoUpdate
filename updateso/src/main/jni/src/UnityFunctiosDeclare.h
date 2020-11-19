///!void RegisterAPIFunction(const char* name, void* symbol)
typedef void (*RegisterAPIFunction_ptr)(const char* name, void* symbol);
RegisterAPIFunction_ptr mRegisterAPIFunction_ptr = NULL;
void RegisterAPIFunction(const char* name, void* symbol)
{
	 return mRegisterAPIFunction_ptr(name,symbol);
}

///!void il2cpp_api_register_symbols(void)
typedef void (*il2cpp_api_register_symbols_ptr)();
il2cpp_api_register_symbols_ptr mil2cpp_api_register_symbols_ptr = NULL;
void il2cpp_api_register_symbols()
{
	 return mil2cpp_api_register_symbols_ptr();
}

///!void* il2cpp_api_lookup_symbol(const char* name)
typedef void* (*il2cpp_api_lookup_symbol_ptr)(const char* name);
il2cpp_api_lookup_symbol_ptr mil2cpp_api_lookup_symbol_ptr = NULL;
void* il2cpp_api_lookup_symbol(const char* name)
{
	 return mil2cpp_api_lookup_symbol_ptr(name);
}

///!void il2cpp_init(const char* domain_name)
typedef void (*il2cpp_init_ptr)(const char* domain_name);
il2cpp_init_ptr mil2cpp_init_ptr = NULL;
void il2cpp_init(const char* domain_name)
{
	 return mil2cpp_init_ptr(domain_name);
}

///!void il2cpp_init_utf16(const Il2CppChar* domain_name)
typedef void (*il2cpp_init_utf16_ptr)(const Il2CppChar* domain_name);
il2cpp_init_utf16_ptr mil2cpp_init_utf16_ptr = NULL;
void il2cpp_init_utf16(const Il2CppChar* domain_name)
{
	 return mil2cpp_init_utf16_ptr(domain_name);
}

///!void il2cpp_shutdown()
typedef void (*il2cpp_shutdown_ptr)();
il2cpp_shutdown_ptr mil2cpp_shutdown_ptr = NULL;
void il2cpp_shutdown()
{
	 return mil2cpp_shutdown_ptr();
}

///!void il2cpp_set_config_dir(const char *config_path)
typedef void (*il2cpp_set_config_dir_ptr)(const char *config_path);
il2cpp_set_config_dir_ptr mil2cpp_set_config_dir_ptr = NULL;
void il2cpp_set_config_dir(const char *config_path)
{
	LOGD("UnityEngine Set Config Path: %s", config_path);
}

void il2cpp_set_config_dir_v2(const char *config_path)
{
	 return mil2cpp_set_config_dir_ptr(config_path);
}

///!void il2cpp_set_data_dir(const char *data_path)
typedef void (*il2cpp_set_data_dir_ptr)(const char *data_path);
il2cpp_set_data_dir_ptr mil2cpp_set_data_dir_ptr = NULL;
void il2cpp_set_data_dir(const char *data_path)
{
	 LOGD("UnityEngine Set Data Path: %s", data_path);
}

void il2cpp_set_data_dir_v2(const char *data_path)
{
	 return mil2cpp_set_data_dir_ptr(data_path);
}

///!void il2cpp_set_temp_dir(const char *temp_dir)
typedef void (*il2cpp_set_temp_dir_ptr)(const char *temp_dir);
il2cpp_set_temp_dir_ptr mil2cpp_set_temp_dir_ptr = NULL;
void il2cpp_set_temp_dir(const char *temp_dir)
{
	LOGD("UnityEngine Set Temp Path: %s", temp_dir);
	return mil2cpp_set_temp_dir_ptr(temp_dir);
}

///!void il2cpp_set_commandline_arguments(int argc, const char* const argv[], const char* basedir)
typedef void (*il2cpp_set_commandline_arguments_ptr)(int argc, const char* const argv[], const char* basedir);
il2cpp_set_commandline_arguments_ptr mil2cpp_set_commandline_arguments_ptr = NULL;
void il2cpp_set_commandline_arguments(int argc, const char* const argv[], const char* basedir)
{
	 return mil2cpp_set_commandline_arguments_ptr(argc,argv,basedir);
}

///!void il2cpp_set_commandline_arguments_utf16(int argc, const Il2CppChar* const argv[], const char* basedir)
typedef void (*il2cpp_set_commandline_arguments_utf16_ptr)(int argc, const Il2CppChar* const argv[], const char* basedir);
il2cpp_set_commandline_arguments_utf16_ptr mil2cpp_set_commandline_arguments_utf16_ptr = NULL;
void il2cpp_set_commandline_arguments_utf16(int argc, const Il2CppChar* const argv[], const char* basedir)
{
	 return mil2cpp_set_commandline_arguments_utf16_ptr(argc,argv,basedir);
}

///!void il2cpp_set_config_utf16(const Il2CppChar* executablePath)
typedef void (*il2cpp_set_config_utf16_ptr)(const Il2CppChar* executablePath);
il2cpp_set_config_utf16_ptr mil2cpp_set_config_utf16_ptr = NULL;
void il2cpp_set_config_utf16(const Il2CppChar* executablePath)
{
	 return mil2cpp_set_config_utf16_ptr(executablePath);
}

///!void il2cpp_set_config(const char* executablePath)
typedef void (*il2cpp_set_config_ptr)(const char* executablePath);
il2cpp_set_config_ptr mil2cpp_set_config_ptr = NULL;
void il2cpp_set_config(const char* executablePath)
{
	 return mil2cpp_set_config_ptr(executablePath);
}

///!void il2cpp_set_memory_callbacks(Il2CppMemoryCallbacks* callbacks)
typedef void (*il2cpp_set_memory_callbacks_ptr)(Il2CppMemoryCallbacks* callbacks);
il2cpp_set_memory_callbacks_ptr mil2cpp_set_memory_callbacks_ptr = NULL;
void il2cpp_set_memory_callbacks(Il2CppMemoryCallbacks* callbacks)
{
	 return mil2cpp_set_memory_callbacks_ptr(callbacks);
}

///!const Il2CppImage* il2cpp_get_corlib()
typedef const Il2CppImage* (*il2cpp_get_corlib_ptr)();
il2cpp_get_corlib_ptr mil2cpp_get_corlib_ptr = NULL;
const Il2CppImage* il2cpp_get_corlib()
{
	 return mil2cpp_get_corlib_ptr();
}

///!void il2cpp_add_internal_call(const char* name, Il2CppMethodPointer method)
typedef void (*il2cpp_add_internal_call_ptr)(const char* name, Il2CppMethodPointer method);
il2cpp_add_internal_call_ptr mil2cpp_add_internal_call_ptr = NULL;
void il2cpp_add_internal_call(const char* name, Il2CppMethodPointer method)
{
	 return mil2cpp_add_internal_call_ptr(name,method);
}

///!Il2CppMethodPointer il2cpp_resolve_icall(const char* name)
typedef Il2CppMethodPointer (*il2cpp_resolve_icall_ptr)(const char* name);
il2cpp_resolve_icall_ptr mil2cpp_resolve_icall_ptr = NULL;
Il2CppMethodPointer il2cpp_resolve_icall(const char* name)
{
	 return mil2cpp_resolve_icall_ptr(name);
}

///!void* il2cpp_alloc(size_t size)
typedef void* (*il2cpp_alloc_ptr)(size_t size);
il2cpp_alloc_ptr mil2cpp_alloc_ptr = NULL;
void* il2cpp_alloc(size_t size)
{
	 return mil2cpp_alloc_ptr(size);
}

///!void il2cpp_free(void* ptr)
typedef void (*il2cpp_free_ptr)(void* ptr);
il2cpp_free_ptr mil2cpp_free_ptr = NULL;
void il2cpp_free(void* ptr)
{
	 return mil2cpp_free_ptr(ptr);
}

///!Il2CppClass *il2cpp_array_class_get(Il2CppClass *element_class, uint32_t rank)
typedef Il2CppClass* (*il2cpp_array_class_get_ptr)(Il2CppClass *element_class, uint32_t rank);
il2cpp_array_class_get_ptr mil2cpp_array_class_get_ptr = NULL;
Il2CppClass *il2cpp_array_class_get(Il2CppClass *element_class, uint32_t rank)
{
	 return mil2cpp_array_class_get_ptr(element_class,rank);
}

///!uint32_t il2cpp_array_length(Il2CppArray* array)
typedef uint32_t (*il2cpp_array_length_ptr)(Il2CppArray* array);
il2cpp_array_length_ptr mil2cpp_array_length_ptr = NULL;
uint32_t il2cpp_array_length(Il2CppArray* array)
{
	 return mil2cpp_array_length_ptr(array);
}

///!uint32_t il2cpp_array_get_byte_length(Il2CppArray *array)
typedef uint32_t (*il2cpp_array_get_byte_length_ptr)(Il2CppArray *array);
il2cpp_array_get_byte_length_ptr mil2cpp_array_get_byte_length_ptr = NULL;
uint32_t il2cpp_array_get_byte_length(Il2CppArray *array)
{
	 return mil2cpp_array_get_byte_length_ptr(array);
}

///!Il2CppArray* il2cpp_array_new(Il2CppClass *elementTypeInfo, il2cpp_array_size_t length)
typedef Il2CppArray* (*il2cpp_array_new_ptr)(Il2CppClass *elementTypeInfo, il2cpp_array_size_t length);
il2cpp_array_new_ptr mil2cpp_array_new_ptr = NULL;
Il2CppArray* il2cpp_array_new(Il2CppClass *elementTypeInfo, il2cpp_array_size_t length)
{
	 return mil2cpp_array_new_ptr(elementTypeInfo,length);
}

///!Il2CppArray* il2cpp_array_new_specific(Il2CppClass *arrayTypeInfo, il2cpp_array_size_t length)
typedef Il2CppArray* (*il2cpp_array_new_specific_ptr)(Il2CppClass *arrayTypeInfo, il2cpp_array_size_t length);
il2cpp_array_new_specific_ptr mil2cpp_array_new_specific_ptr = NULL;
Il2CppArray* il2cpp_array_new_specific(Il2CppClass *arrayTypeInfo, il2cpp_array_size_t length)
{
	 return mil2cpp_array_new_specific_ptr(arrayTypeInfo,length);
}

///!Il2CppArray* il2cpp_array_new_full(Il2CppClass *array_class, il2cpp_array_size_t *lengths, il2cpp_array_size_t *lower_bounds)
typedef Il2CppArray* (*il2cpp_array_new_full_ptr)(Il2CppClass *array_class, il2cpp_array_size_t *lengths, il2cpp_array_size_t *lower_bounds);
il2cpp_array_new_full_ptr mil2cpp_array_new_full_ptr = NULL;
Il2CppArray* il2cpp_array_new_full(Il2CppClass *array_class, il2cpp_array_size_t *lengths, il2cpp_array_size_t *lower_bounds)
{
	 return mil2cpp_array_new_full_ptr(array_class,lengths,lower_bounds);
}

///!Il2CppClass* il2cpp_bounded_array_class_get(Il2CppClass *element_class, uint32_t rank, bool bounded)
typedef Il2CppClass* (*il2cpp_bounded_array_class_get_ptr)(Il2CppClass *element_class, uint32_t rank, bool bounded);
il2cpp_bounded_array_class_get_ptr mil2cpp_bounded_array_class_get_ptr = NULL;
Il2CppClass* il2cpp_bounded_array_class_get(Il2CppClass *element_class, uint32_t rank, bool bounded)
{
	 return mil2cpp_bounded_array_class_get_ptr(element_class,rank,bounded);
}

///!int il2cpp_array_element_size(const Il2CppClass* klass)
typedef int (*il2cpp_array_element_size_ptr)(const Il2CppClass* klass);
il2cpp_array_element_size_ptr mil2cpp_array_element_size_ptr = NULL;
int il2cpp_array_element_size(const Il2CppClass* klass)
{
	 return mil2cpp_array_element_size_ptr(klass);
}

///!const Il2CppImage* il2cpp_assembly_get_image(const Il2CppAssembly *assembly)
typedef const Il2CppImage* (*il2cpp_assembly_get_image_ptr)(const Il2CppAssembly *assembly);
il2cpp_assembly_get_image_ptr mil2cpp_assembly_get_image_ptr = NULL;
const Il2CppImage* il2cpp_assembly_get_image(const Il2CppAssembly *assembly)
{
	 return mil2cpp_assembly_get_image_ptr(assembly);
}

///!const Il2CppType* il2cpp_class_enum_basetype(Il2CppClass *klass)
typedef const Il2CppType* (*il2cpp_class_enum_basetype_ptr)(Il2CppClass *klass);
il2cpp_class_enum_basetype_ptr mil2cpp_class_enum_basetype_ptr = NULL;
const Il2CppType* il2cpp_class_enum_basetype(Il2CppClass *klass)
{
	 return mil2cpp_class_enum_basetype_ptr(klass);
}

///!Il2CppClass* il2cpp_class_from_system_type(Il2CppReflectionType *type)
typedef Il2CppClass* (*il2cpp_class_from_system_type_ptr)(Il2CppReflectionType *type);
il2cpp_class_from_system_type_ptr mil2cpp_class_from_system_type_ptr = NULL;
Il2CppClass* il2cpp_class_from_system_type(Il2CppReflectionType *type)
{
	 return mil2cpp_class_from_system_type_ptr(type);
}

///!bool il2cpp_class_is_generic(const Il2CppClass *klass)
typedef bool (*il2cpp_class_is_generic_ptr)(const Il2CppClass *klass);
il2cpp_class_is_generic_ptr mil2cpp_class_is_generic_ptr = NULL;
bool il2cpp_class_is_generic(const Il2CppClass *klass)
{
	 return mil2cpp_class_is_generic_ptr(klass);
}

///!bool il2cpp_class_is_inflated(const Il2CppClass *klass)
typedef bool (*il2cpp_class_is_inflated_ptr)(const Il2CppClass *klass);
il2cpp_class_is_inflated_ptr mil2cpp_class_is_inflated_ptr = NULL;
bool il2cpp_class_is_inflated(const Il2CppClass *klass)
{
	 return mil2cpp_class_is_inflated_ptr(klass);
}

///!bool il2cpp_class_is_assignable_from(Il2CppClass *klass, Il2CppClass *oklass)
typedef bool (*il2cpp_class_is_assignable_from_ptr)(Il2CppClass *klass, Il2CppClass *oklass);
il2cpp_class_is_assignable_from_ptr mil2cpp_class_is_assignable_from_ptr = NULL;
bool il2cpp_class_is_assignable_from(Il2CppClass *klass, Il2CppClass *oklass)
{
	 return mil2cpp_class_is_assignable_from_ptr(klass,oklass);
}

///!bool il2cpp_class_is_subclass_of(Il2CppClass *klass, Il2CppClass *klassc, bool check_interfaces)
typedef bool (*il2cpp_class_is_subclass_of_ptr)(Il2CppClass *klass, Il2CppClass *klassc, bool check_interfaces);
il2cpp_class_is_subclass_of_ptr mil2cpp_class_is_subclass_of_ptr = NULL;
bool il2cpp_class_is_subclass_of(Il2CppClass *klass, Il2CppClass *klassc, bool check_interfaces)
{
	 return mil2cpp_class_is_subclass_of_ptr(klass,klassc,check_interfaces);
}

///!bool il2cpp_class_has_parent(Il2CppClass *klass, Il2CppClass *klassc)
typedef bool (*il2cpp_class_has_parent_ptr)(Il2CppClass *klass, Il2CppClass *klassc);
il2cpp_class_has_parent_ptr mil2cpp_class_has_parent_ptr = NULL;
bool il2cpp_class_has_parent(Il2CppClass *klass, Il2CppClass *klassc)
{
	 return mil2cpp_class_has_parent_ptr(klass,klassc);
}

///!Il2CppClass* il2cpp_class_from_il2cpp_type(const Il2CppType* type)
typedef Il2CppClass* (*il2cpp_class_from_il2cpp_type_ptr)(const Il2CppType* type);
il2cpp_class_from_il2cpp_type_ptr mil2cpp_class_from_il2cpp_type_ptr = NULL;
Il2CppClass* il2cpp_class_from_il2cpp_type(const Il2CppType* type)
{
	 return mil2cpp_class_from_il2cpp_type_ptr(type);
}

///!Il2CppClass* il2cpp_class_from_name(const Il2CppImage* image, const char* namespaze, const char *name)
typedef Il2CppClass* (*il2cpp_class_from_name_ptr)(const Il2CppImage* image, const char* namespaze, const char *name);
il2cpp_class_from_name_ptr mil2cpp_class_from_name_ptr = NULL;
Il2CppClass* il2cpp_class_from_name(const Il2CppImage* image, const char* namespaze, const char *name)
{
	 return mil2cpp_class_from_name_ptr(image,namespaze,name);
}

///!Il2CppClass* il2cpp_class_get_element_class(Il2CppClass *klass)
typedef Il2CppClass* (*il2cpp_class_get_element_class_ptr)(Il2CppClass *klass);
il2cpp_class_get_element_class_ptr mil2cpp_class_get_element_class_ptr = NULL;
Il2CppClass* il2cpp_class_get_element_class(Il2CppClass *klass)
{
	 return mil2cpp_class_get_element_class_ptr(klass);
}

///!const EventInfo* il2cpp_class_get_events(Il2CppClass *klass, void* *iter)
typedef const EventInfo* (*il2cpp_class_get_events_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_events_ptr mil2cpp_class_get_events_ptr = NULL;
const EventInfo* il2cpp_class_get_events(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_events_ptr(klass,iter);
}

///!FieldInfo* il2cpp_class_get_fields(Il2CppClass *klass, void* *iter)
typedef FieldInfo* (*il2cpp_class_get_fields_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_fields_ptr mil2cpp_class_get_fields_ptr = NULL;
FieldInfo* il2cpp_class_get_fields(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_fields_ptr(klass,iter);
}

///!Il2CppClass* il2cpp_class_get_nested_types(Il2CppClass *klass, void* *iter)
typedef Il2CppClass* (*il2cpp_class_get_nested_types_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_nested_types_ptr mil2cpp_class_get_nested_types_ptr = NULL;
Il2CppClass* il2cpp_class_get_nested_types(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_nested_types_ptr(klass,iter);
}

///!Il2CppClass* il2cpp_class_get_interfaces(Il2CppClass *klass, void* *iter)
typedef Il2CppClass* (*il2cpp_class_get_interfaces_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_interfaces_ptr mil2cpp_class_get_interfaces_ptr = NULL;
Il2CppClass* il2cpp_class_get_interfaces(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_interfaces_ptr(klass,iter);
}

///!const PropertyInfo* il2cpp_class_get_properties(Il2CppClass *klass, void* *iter)
typedef const PropertyInfo* (*il2cpp_class_get_properties_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_properties_ptr mil2cpp_class_get_properties_ptr = NULL;
const PropertyInfo* il2cpp_class_get_properties(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_properties_ptr(klass,iter);
}

///!const PropertyInfo* il2cpp_class_get_property_from_name(Il2CppClass *klass, const char *name)
typedef const PropertyInfo* (*il2cpp_class_get_property_from_name_ptr)(Il2CppClass *klass, const char *name);
il2cpp_class_get_property_from_name_ptr mil2cpp_class_get_property_from_name_ptr = NULL;
const PropertyInfo* il2cpp_class_get_property_from_name(Il2CppClass *klass, const char *name)
{
	 return mil2cpp_class_get_property_from_name_ptr(klass,name);
}

///!FieldInfo* il2cpp_class_get_field_from_name(Il2CppClass* klass, const char *name)
typedef FieldInfo* (*il2cpp_class_get_field_from_name_ptr)(Il2CppClass* klass, const char *name);
il2cpp_class_get_field_from_name_ptr mil2cpp_class_get_field_from_name_ptr = NULL;
FieldInfo* il2cpp_class_get_field_from_name(Il2CppClass* klass, const char *name)
{
	 return mil2cpp_class_get_field_from_name_ptr(klass,name);
}

///!const MethodInfo* il2cpp_class_get_methods(Il2CppClass *klass, void* *iter)
typedef const MethodInfo* (*il2cpp_class_get_methods_ptr)(Il2CppClass *klass, void* *iter);
il2cpp_class_get_methods_ptr mil2cpp_class_get_methods_ptr = NULL;
const MethodInfo* il2cpp_class_get_methods(Il2CppClass *klass, void* *iter)
{
	 return mil2cpp_class_get_methods_ptr(klass,iter);
}

///!const MethodInfo* il2cpp_class_get_method_from_name(Il2CppClass *klass, const char* name, int argsCount)
typedef const MethodInfo* (*il2cpp_class_get_method_from_name_ptr)(Il2CppClass *klass, const char* name, int argsCount);
il2cpp_class_get_method_from_name_ptr mil2cpp_class_get_method_from_name_ptr = NULL;
const MethodInfo* il2cpp_class_get_method_from_name(Il2CppClass *klass, const char* name, int argsCount)
{
	 return mil2cpp_class_get_method_from_name_ptr(klass,name,argsCount);
}

///!const char* il2cpp_class_get_name(Il2CppClass *klass)
typedef const char* (*il2cpp_class_get_name_ptr)(Il2CppClass *klass);
il2cpp_class_get_name_ptr mil2cpp_class_get_name_ptr = NULL;
const char* il2cpp_class_get_name(Il2CppClass *klass)
{
	 return mil2cpp_class_get_name_ptr(klass);
}

///!const char* il2cpp_class_get_namespace(Il2CppClass *klass)
typedef const char* (*il2cpp_class_get_namespace_ptr)(Il2CppClass *klass);
il2cpp_class_get_namespace_ptr mil2cpp_class_get_namespace_ptr = NULL;
const char* il2cpp_class_get_namespace(Il2CppClass *klass)
{
	 return mil2cpp_class_get_namespace_ptr(klass);
}

///!Il2CppClass* il2cpp_class_get_parent(Il2CppClass *klass)
typedef Il2CppClass* (*il2cpp_class_get_parent_ptr)(Il2CppClass *klass);
il2cpp_class_get_parent_ptr mil2cpp_class_get_parent_ptr = NULL;
Il2CppClass* il2cpp_class_get_parent(Il2CppClass *klass)
{
	 return mil2cpp_class_get_parent_ptr(klass);
}

///!Il2CppClass* il2cpp_class_get_declaring_type(Il2CppClass* klass)
typedef Il2CppClass* (*il2cpp_class_get_declaring_type_ptr)(Il2CppClass* klass);
il2cpp_class_get_declaring_type_ptr mil2cpp_class_get_declaring_type_ptr = NULL;
Il2CppClass* il2cpp_class_get_declaring_type(Il2CppClass* klass)
{
	 return mil2cpp_class_get_declaring_type_ptr(klass);
}

///!int32_t il2cpp_class_instance_size(Il2CppClass *klass)
typedef int32_t (*il2cpp_class_instance_size_ptr)(Il2CppClass *klass);
il2cpp_class_instance_size_ptr mil2cpp_class_instance_size_ptr = NULL;
int32_t il2cpp_class_instance_size(Il2CppClass *klass)
{
	 return mil2cpp_class_instance_size_ptr(klass);
}

///!size_t il2cpp_class_num_fields(const Il2CppClass* klass)
typedef size_t (*il2cpp_class_num_fields_ptr)(const Il2CppClass* klass);
il2cpp_class_num_fields_ptr mil2cpp_class_num_fields_ptr = NULL;
size_t il2cpp_class_num_fields(const Il2CppClass* klass)
{
	 return mil2cpp_class_num_fields_ptr(klass);
}

///!bool il2cpp_class_is_valuetype(const Il2CppClass* klass)
typedef bool (*il2cpp_class_is_valuetype_ptr)(const Il2CppClass* klass);
il2cpp_class_is_valuetype_ptr mil2cpp_class_is_valuetype_ptr = NULL;
bool il2cpp_class_is_valuetype(const Il2CppClass* klass)
{
	 return mil2cpp_class_is_valuetype_ptr(klass);
}

///!bool il2cpp_class_is_blittable(const Il2CppClass* klass)
typedef bool (*il2cpp_class_is_blittable_ptr)(const Il2CppClass* klass);
il2cpp_class_is_blittable_ptr mil2cpp_class_is_blittable_ptr = NULL;
bool il2cpp_class_is_blittable(const Il2CppClass* klass)
{
	 return mil2cpp_class_is_blittable_ptr(klass);
}

///!int32_t il2cpp_class_value_size(Il2CppClass *klass, uint32_t *align)
typedef int32_t (*il2cpp_class_value_size_ptr)(Il2CppClass *klass, uint32_t *align);
il2cpp_class_value_size_ptr mil2cpp_class_value_size_ptr = NULL;
int32_t il2cpp_class_value_size(Il2CppClass *klass, uint32_t *align)
{
	 return mil2cpp_class_value_size_ptr(klass,align);
}

///!int il2cpp_class_get_flags(const Il2CppClass *klass)
typedef int (*il2cpp_class_get_flags_ptr)(const Il2CppClass *klass);
il2cpp_class_get_flags_ptr mil2cpp_class_get_flags_ptr = NULL;
int il2cpp_class_get_flags(const Il2CppClass *klass)
{
	 return mil2cpp_class_get_flags_ptr(klass);
}

///!bool il2cpp_class_is_abstract(const Il2CppClass *klass)
typedef bool (*il2cpp_class_is_abstract_ptr)(const Il2CppClass *klass);
il2cpp_class_is_abstract_ptr mil2cpp_class_is_abstract_ptr = NULL;
bool il2cpp_class_is_abstract(const Il2CppClass *klass)
{
	 return mil2cpp_class_is_abstract_ptr(klass);
}

///!bool il2cpp_class_is_interface(const Il2CppClass *klass)
typedef bool (*il2cpp_class_is_interface_ptr)(const Il2CppClass *klass);
il2cpp_class_is_interface_ptr mil2cpp_class_is_interface_ptr = NULL;
bool il2cpp_class_is_interface(const Il2CppClass *klass)
{
	 return mil2cpp_class_is_interface_ptr(klass);
}

///!int il2cpp_class_array_element_size(const Il2CppClass *klass)
typedef int (*il2cpp_class_array_element_size_ptr)(const Il2CppClass *klass);
il2cpp_class_array_element_size_ptr mil2cpp_class_array_element_size_ptr = NULL;
int il2cpp_class_array_element_size(const Il2CppClass *klass)
{
	 return mil2cpp_class_array_element_size_ptr(klass);
}

///!Il2CppClass* il2cpp_class_from_type(const Il2CppType *type)
typedef Il2CppClass* (*il2cpp_class_from_type_ptr)(const Il2CppType *type);
il2cpp_class_from_type_ptr mil2cpp_class_from_type_ptr = NULL;
Il2CppClass* il2cpp_class_from_type(const Il2CppType *type)
{
	 return mil2cpp_class_from_type_ptr(type);
}

///!const Il2CppType* il2cpp_class_get_type(Il2CppClass *klass)
typedef const Il2CppType* (*il2cpp_class_get_type_ptr)(Il2CppClass *klass);
il2cpp_class_get_type_ptr mil2cpp_class_get_type_ptr = NULL;
const Il2CppType* il2cpp_class_get_type(Il2CppClass *klass)
{
	 return mil2cpp_class_get_type_ptr(klass);
}

///!uint32_t il2cpp_class_get_type_token(Il2CppClass *klass)
typedef uint32_t (*il2cpp_class_get_type_token_ptr)(Il2CppClass *klass);
il2cpp_class_get_type_token_ptr mil2cpp_class_get_type_token_ptr = NULL;
uint32_t il2cpp_class_get_type_token(Il2CppClass *klass)
{
	 return mil2cpp_class_get_type_token_ptr(klass);
}

///!bool il2cpp_class_has_attribute(Il2CppClass *klass, Il2CppClass *attr_class)
typedef bool (*il2cpp_class_has_attribute_ptr)(Il2CppClass *klass, Il2CppClass *attr_class);
il2cpp_class_has_attribute_ptr mil2cpp_class_has_attribute_ptr = NULL;
bool il2cpp_class_has_attribute(Il2CppClass *klass, Il2CppClass *attr_class)
{
	 return mil2cpp_class_has_attribute_ptr(klass,attr_class);
}

///!bool il2cpp_class_has_references(Il2CppClass *klass)
typedef bool (*il2cpp_class_has_references_ptr)(Il2CppClass *klass);
il2cpp_class_has_references_ptr mil2cpp_class_has_references_ptr = NULL;
bool il2cpp_class_has_references(Il2CppClass *klass)
{
	 return mil2cpp_class_has_references_ptr(klass);
}

///!bool il2cpp_class_is_enum(const Il2CppClass *klass)
typedef bool (*il2cpp_class_is_enum_ptr)(const Il2CppClass *klass);
il2cpp_class_is_enum_ptr mil2cpp_class_is_enum_ptr = NULL;
bool il2cpp_class_is_enum(const Il2CppClass *klass)
{
	 return mil2cpp_class_is_enum_ptr(klass);
}

///!const Il2CppImage* il2cpp_class_get_image(Il2CppClass* klass)
typedef const Il2CppImage* (*il2cpp_class_get_image_ptr)(Il2CppClass* klass);
il2cpp_class_get_image_ptr mil2cpp_class_get_image_ptr = NULL;
const Il2CppImage* il2cpp_class_get_image(Il2CppClass* klass)
{
	 return mil2cpp_class_get_image_ptr(klass);
}

///!const char *il2cpp_class_get_assemblyname(const Il2CppClass *klass)
typedef const char* (*il2cpp_class_get_assemblyname_ptr)(const Il2CppClass *klass);
il2cpp_class_get_assemblyname_ptr mil2cpp_class_get_assemblyname_ptr = NULL;
const char *il2cpp_class_get_assemblyname(const Il2CppClass *klass)
{
	 return mil2cpp_class_get_assemblyname_ptr(klass);
}

///!int il2cpp_class_get_rank(const Il2CppClass *klass)
typedef int (*il2cpp_class_get_rank_ptr)(const Il2CppClass *klass);
il2cpp_class_get_rank_ptr mil2cpp_class_get_rank_ptr = NULL;
int il2cpp_class_get_rank(const Il2CppClass *klass)
{
	 return mil2cpp_class_get_rank_ptr(klass);
}

///!size_t il2cpp_class_get_bitmap_size(const Il2CppClass *klass)
typedef size_t (*il2cpp_class_get_bitmap_size_ptr)(const Il2CppClass *klass);
il2cpp_class_get_bitmap_size_ptr mil2cpp_class_get_bitmap_size_ptr = NULL;
size_t il2cpp_class_get_bitmap_size(const Il2CppClass *klass)
{
	 return mil2cpp_class_get_bitmap_size_ptr(klass);
}

///!void il2cpp_class_get_bitmap(Il2CppClass *klass, size_t* bitmap)
typedef void (*il2cpp_class_get_bitmap_ptr)(Il2CppClass *klass, size_t* bitmap);
il2cpp_class_get_bitmap_ptr mil2cpp_class_get_bitmap_ptr = NULL;
void il2cpp_class_get_bitmap(Il2CppClass *klass, size_t* bitmap)
{
	 return mil2cpp_class_get_bitmap_ptr(klass,bitmap);
}

///!bool il2cpp_stats_dump_to_file(const char *path)
typedef bool (*il2cpp_stats_dump_to_file_ptr)(const char *path);
il2cpp_stats_dump_to_file_ptr mil2cpp_stats_dump_to_file_ptr = NULL;
bool il2cpp_stats_dump_to_file(const char *path)
{
	 return mil2cpp_stats_dump_to_file_ptr(path);
}

///!uint64_t il2cpp_stats_get_value(Il2CppStat stat)
typedef uint64_t (*il2cpp_stats_get_value_ptr)(Il2CppStat stat);
il2cpp_stats_get_value_ptr mil2cpp_stats_get_value_ptr = NULL;
uint64_t il2cpp_stats_get_value(Il2CppStat stat)
{
	 return mil2cpp_stats_get_value_ptr(stat);
}

///!Il2CppDomain* il2cpp_domain_get()
typedef Il2CppDomain* (*il2cpp_domain_get_ptr)();
il2cpp_domain_get_ptr mil2cpp_domain_get_ptr = NULL;
Il2CppDomain* il2cpp_domain_get()
{
	 return mil2cpp_domain_get_ptr();
}

///!const Il2CppAssembly* il2cpp_domain_assembly_open(Il2CppDomain *domain, const char *name)
typedef const Il2CppAssembly* (*il2cpp_domain_assembly_open_ptr)(Il2CppDomain *domain, const char *name);
il2cpp_domain_assembly_open_ptr mil2cpp_domain_assembly_open_ptr = NULL;
const Il2CppAssembly* il2cpp_domain_assembly_open(Il2CppDomain *domain, const char *name)
{
	 return mil2cpp_domain_assembly_open_ptr(domain,name);
}

///!const Il2CppAssembly** il2cpp_domain_get_assemblies(const Il2CppDomain* domain, size_t* size)
typedef const Il2CppAssembly** (*il2cpp_domain_get_assemblies_ptr)(const Il2CppDomain* domain, size_t* size);
il2cpp_domain_get_assemblies_ptr mil2cpp_domain_get_assemblies_ptr = NULL;
const Il2CppAssembly** il2cpp_domain_get_assemblies(const Il2CppDomain* domain, size_t* size)
{
	 return mil2cpp_domain_get_assemblies_ptr(domain,size);
}

///!void il2cpp_raise_exception(Il2CppException* exc)
typedef void (*il2cpp_raise_exception_ptr)(Il2CppException* exc);
il2cpp_raise_exception_ptr mil2cpp_raise_exception_ptr = NULL;
void il2cpp_raise_exception(Il2CppException* exc)
{
	 return mil2cpp_raise_exception_ptr(exc);
}

///!Il2CppException* il2cpp_exception_from_name_msg(const Il2CppImage* image, const char *name_space, const char *name, const char *msg)
typedef Il2CppException* (*il2cpp_exception_from_name_msg_ptr)(const Il2CppImage* image, const char *name_space, const char *name, const char *msg);
il2cpp_exception_from_name_msg_ptr mil2cpp_exception_from_name_msg_ptr = NULL;
Il2CppException* il2cpp_exception_from_name_msg(const Il2CppImage* image, const char *name_space, const char *name, const char *msg)
{
	 return mil2cpp_exception_from_name_msg_ptr(image,name_space,name,msg);
}

///!Il2CppException* il2cpp_get_exception_argument_null(const char *arg)
typedef Il2CppException* (*il2cpp_get_exception_argument_null_ptr)(const char *arg);
il2cpp_get_exception_argument_null_ptr mil2cpp_get_exception_argument_null_ptr = NULL;
Il2CppException* il2cpp_get_exception_argument_null(const char *arg)
{
	 return mil2cpp_get_exception_argument_null_ptr(arg);
}

///!void il2cpp_format_exception(const Il2CppException* ex, char* message, int message_size)
typedef void (*il2cpp_format_exception_ptr)(const Il2CppException* ex, char* message, int message_size);
il2cpp_format_exception_ptr mil2cpp_format_exception_ptr = NULL;
void il2cpp_format_exception(const Il2CppException* ex, char* message, int message_size)
{
	 return mil2cpp_format_exception_ptr(ex,message,message_size);
}

///!void il2cpp_format_stack_trace(const Il2CppException* ex, char* output, int output_size)
typedef void (*il2cpp_format_stack_trace_ptr)(const Il2CppException* ex, char* output, int output_size);
il2cpp_format_stack_trace_ptr mil2cpp_format_stack_trace_ptr = NULL;
void il2cpp_format_stack_trace(const Il2CppException* ex, char* output, int output_size)
{
	 return mil2cpp_format_stack_trace_ptr(ex,output,output_size);
}

///!void il2cpp_unhandled_exception(Il2CppException* exc)
typedef void (*il2cpp_unhandled_exception_ptr)(Il2CppException* exc);
il2cpp_unhandled_exception_ptr mil2cpp_unhandled_exception_ptr = NULL;
void il2cpp_unhandled_exception(Il2CppException* exc)
{
	 return mil2cpp_unhandled_exception_ptr(exc);
}

///!const char* il2cpp_field_get_name(FieldInfo *field)
typedef const char* (*il2cpp_field_get_name_ptr)(FieldInfo *field);
il2cpp_field_get_name_ptr mil2cpp_field_get_name_ptr = NULL;
const char* il2cpp_field_get_name(FieldInfo *field)
{
	 return mil2cpp_field_get_name_ptr(field);
}

///!int il2cpp_field_get_flags(FieldInfo *field)
typedef int (*il2cpp_field_get_flags_ptr)(FieldInfo *field);
il2cpp_field_get_flags_ptr mil2cpp_field_get_flags_ptr = NULL;
int il2cpp_field_get_flags(FieldInfo *field)
{
	 return mil2cpp_field_get_flags_ptr(field);
}

///!Il2CppClass* il2cpp_field_get_parent(FieldInfo *field)
typedef Il2CppClass* (*il2cpp_field_get_parent_ptr)(FieldInfo *field);
il2cpp_field_get_parent_ptr mil2cpp_field_get_parent_ptr = NULL;
Il2CppClass* il2cpp_field_get_parent(FieldInfo *field)
{
	 return mil2cpp_field_get_parent_ptr(field);
}

///!size_t il2cpp_field_get_offset(FieldInfo *field)
typedef size_t (*il2cpp_field_get_offset_ptr)(FieldInfo *field);
il2cpp_field_get_offset_ptr mil2cpp_field_get_offset_ptr = NULL;
size_t il2cpp_field_get_offset(FieldInfo *field)
{
	 return mil2cpp_field_get_offset_ptr(field);
}

///!const Il2CppType* il2cpp_field_get_type(FieldInfo *field)
typedef const Il2CppType* (*il2cpp_field_get_type_ptr)(FieldInfo *field);
il2cpp_field_get_type_ptr mil2cpp_field_get_type_ptr = NULL;
const Il2CppType* il2cpp_field_get_type(FieldInfo *field)
{
	 return mil2cpp_field_get_type_ptr(field);
}

///!void il2cpp_field_get_value(Il2CppObject *obj, FieldInfo *field, void *value)
typedef void (*il2cpp_field_get_value_ptr)(Il2CppObject *obj, FieldInfo *field, void *value);
il2cpp_field_get_value_ptr mil2cpp_field_get_value_ptr = NULL;
void il2cpp_field_get_value(Il2CppObject *obj, FieldInfo *field, void *value)
{
	 return mil2cpp_field_get_value_ptr(obj,field,value);
}

///!Il2CppObject* il2cpp_field_get_value_object(FieldInfo *field, Il2CppObject *obj)
typedef Il2CppObject* (*il2cpp_field_get_value_object_ptr)(FieldInfo *field, Il2CppObject *obj);
il2cpp_field_get_value_object_ptr mil2cpp_field_get_value_object_ptr = NULL;
Il2CppObject* il2cpp_field_get_value_object(FieldInfo *field, Il2CppObject *obj)
{
	 return mil2cpp_field_get_value_object_ptr(field,obj);
}

///!bool il2cpp_field_has_attribute(FieldInfo *field, Il2CppClass *attr_class)
typedef bool (*il2cpp_field_has_attribute_ptr)(FieldInfo *field, Il2CppClass *attr_class);
il2cpp_field_has_attribute_ptr mil2cpp_field_has_attribute_ptr = NULL;
bool il2cpp_field_has_attribute(FieldInfo *field, Il2CppClass *attr_class)
{
	 return mil2cpp_field_has_attribute_ptr(field,attr_class);
}

///!void il2cpp_field_set_value(Il2CppObject *obj, FieldInfo *field, void *value)
typedef void (*il2cpp_field_set_value_ptr)(Il2CppObject *obj, FieldInfo *field, void *value);
il2cpp_field_set_value_ptr mil2cpp_field_set_value_ptr = NULL;
void il2cpp_field_set_value(Il2CppObject *obj, FieldInfo *field, void *value)
{
	 return mil2cpp_field_set_value_ptr(obj,field,value);
}

///!void il2cpp_field_set_value_object(Il2CppObject* objectInstance, FieldInfo* field, Il2CppObject* value)
typedef void (*il2cpp_field_set_value_object_ptr)(Il2CppObject* objectInstance, FieldInfo* field, Il2CppObject* value);
il2cpp_field_set_value_object_ptr mil2cpp_field_set_value_object_ptr = NULL;
void il2cpp_field_set_value_object(Il2CppObject* objectInstance, FieldInfo* field, Il2CppObject* value)
{
	 return mil2cpp_field_set_value_object_ptr(objectInstance,field,value);
}

///!void il2cpp_field_static_get_value(FieldInfo *field, void *value)
typedef void (*il2cpp_field_static_get_value_ptr)(FieldInfo *field, void *value);
il2cpp_field_static_get_value_ptr mil2cpp_field_static_get_value_ptr = NULL;
void il2cpp_field_static_get_value(FieldInfo *field, void *value)
{
	 return mil2cpp_field_static_get_value_ptr(field,value);
}

///!void il2cpp_field_static_set_value(FieldInfo *field, void *value)
typedef void (*il2cpp_field_static_set_value_ptr)(FieldInfo *field, void *value);
il2cpp_field_static_set_value_ptr mil2cpp_field_static_set_value_ptr = NULL;
void il2cpp_field_static_set_value(FieldInfo *field, void *value)
{
	 return mil2cpp_field_static_set_value_ptr(field,value);
}

///!void il2cpp_gc_collect(int maxGenerations)
typedef void (*il2cpp_gc_collect_ptr)(int maxGenerations);
il2cpp_gc_collect_ptr mil2cpp_gc_collect_ptr = NULL;
void il2cpp_gc_collect(int maxGenerations)
{
	 return mil2cpp_gc_collect_ptr(maxGenerations);
}

///!int32_t il2cpp_gc_collect_a_little()
typedef int32_t (*il2cpp_gc_collect_a_little_ptr)();
il2cpp_gc_collect_a_little_ptr mil2cpp_gc_collect_a_little_ptr = NULL;
int32_t il2cpp_gc_collect_a_little()
{
	 return mil2cpp_gc_collect_a_little_ptr();
}

///!void il2cpp_gc_enable()
typedef void (*il2cpp_gc_enable_ptr)();
il2cpp_gc_enable_ptr mil2cpp_gc_enable_ptr = NULL;
void il2cpp_gc_enable()
{
	 return mil2cpp_gc_enable_ptr();
}

///!void il2cpp_gc_disable()
typedef void (*il2cpp_gc_disable_ptr)();
il2cpp_gc_disable_ptr mil2cpp_gc_disable_ptr = NULL;
void il2cpp_gc_disable()
{
	 return mil2cpp_gc_disable_ptr();
}

///!bool il2cpp_gc_is_disabled()
typedef bool (*il2cpp_gc_is_disabled_ptr)();
il2cpp_gc_is_disabled_ptr mil2cpp_gc_is_disabled_ptr = NULL;
bool il2cpp_gc_is_disabled()
{
	 return mil2cpp_gc_is_disabled_ptr();
}

///!int64_t il2cpp_gc_get_used_size()
typedef int64_t (*il2cpp_gc_get_used_size_ptr)();
il2cpp_gc_get_used_size_ptr mil2cpp_gc_get_used_size_ptr = NULL;
int64_t il2cpp_gc_get_used_size()
{
	 return mil2cpp_gc_get_used_size_ptr();
}

///!int64_t il2cpp_gc_get_heap_size()
typedef int64_t (*il2cpp_gc_get_heap_size_ptr)();
il2cpp_gc_get_heap_size_ptr mil2cpp_gc_get_heap_size_ptr = NULL;
int64_t il2cpp_gc_get_heap_size()
{
	 return mil2cpp_gc_get_heap_size_ptr();
}

///!uint32_t il2cpp_gchandle_new(Il2CppObject *obj, bool pinned)
typedef uint32_t (*il2cpp_gchandle_new_ptr)(Il2CppObject *obj, bool pinned);
il2cpp_gchandle_new_ptr mil2cpp_gchandle_new_ptr = NULL;
uint32_t il2cpp_gchandle_new(Il2CppObject *obj, bool pinned)
{
	 return mil2cpp_gchandle_new_ptr(obj,pinned);
}

///!uint32_t il2cpp_gchandle_new_weakref(Il2CppObject *obj, bool track_resurrection)
typedef uint32_t (*il2cpp_gchandle_new_weakref_ptr)(Il2CppObject *obj, bool track_resurrection);
il2cpp_gchandle_new_weakref_ptr mil2cpp_gchandle_new_weakref_ptr = NULL;
uint32_t il2cpp_gchandle_new_weakref(Il2CppObject *obj, bool track_resurrection)
{
	 return mil2cpp_gchandle_new_weakref_ptr(obj,track_resurrection);
}

///!Il2CppObject* il2cpp_gchandle_get_target(uint32_t gchandle)
typedef Il2CppObject* (*il2cpp_gchandle_get_target_ptr)(uint32_t gchandle);
il2cpp_gchandle_get_target_ptr mil2cpp_gchandle_get_target_ptr = NULL;
Il2CppObject* il2cpp_gchandle_get_target(uint32_t gchandle)
{
	 return mil2cpp_gchandle_get_target_ptr(gchandle);
}

///!void il2cpp_gc_wbarrier_set_field(Il2CppObject *obj, void **targetAddress, void *object)
typedef void (*il2cpp_gc_wbarrier_set_field_ptr)(Il2CppObject *obj, void **targetAddress, void *object);
il2cpp_gc_wbarrier_set_field_ptr mil2cpp_gc_wbarrier_set_field_ptr = NULL;
void il2cpp_gc_wbarrier_set_field(Il2CppObject *obj, void **targetAddress, void *object)
{
	 return mil2cpp_gc_wbarrier_set_field_ptr(obj,targetAddress,object);
}

///!void il2cpp_gchandle_free(uint32_t gchandle)
typedef void (*il2cpp_gchandle_free_ptr)(uint32_t gchandle);
il2cpp_gchandle_free_ptr mil2cpp_gchandle_free_ptr = NULL;
void il2cpp_gchandle_free(uint32_t gchandle)
{
	 return mil2cpp_gchandle_free_ptr(gchandle);
}

///!void* il2cpp_unity_liveness_calculation_begin(Il2CppClass* filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_WorldChangedCallback onWorldStarted, il2cpp_WorldChangedCallback onWorldStopped)
typedef void* (*il2cpp_unity_liveness_calculation_begin_ptr)(Il2CppClass* filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_WorldChangedCallback onWorldStarted, il2cpp_WorldChangedCallback onWorldStopped);
il2cpp_unity_liveness_calculation_begin_ptr mil2cpp_unity_liveness_calculation_begin_ptr = NULL;
void* il2cpp_unity_liveness_calculation_begin(Il2CppClass* filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_WorldChangedCallback onWorldStarted, il2cpp_WorldChangedCallback onWorldStopped)
{
	 return mil2cpp_unity_liveness_calculation_begin_ptr(filter,max_object_count,callback,userdata,onWorldStarted,onWorldStopped);
}

///!void il2cpp_unity_liveness_calculation_end(void* state)
typedef void (*il2cpp_unity_liveness_calculation_end_ptr)(void* state);
il2cpp_unity_liveness_calculation_end_ptr mil2cpp_unity_liveness_calculation_end_ptr = NULL;
void il2cpp_unity_liveness_calculation_end(void* state)
{
	 return mil2cpp_unity_liveness_calculation_end_ptr(state);
}

///!void il2cpp_unity_liveness_calculation_from_root(Il2CppObject* root, void* state)
typedef void (*il2cpp_unity_liveness_calculation_from_root_ptr)(Il2CppObject* root, void* state);
il2cpp_unity_liveness_calculation_from_root_ptr mil2cpp_unity_liveness_calculation_from_root_ptr = NULL;
void il2cpp_unity_liveness_calculation_from_root(Il2CppObject* root, void* state)
{
	 return mil2cpp_unity_liveness_calculation_from_root_ptr(root,state);
}

///!void il2cpp_unity_liveness_calculation_from_statics(void* state)
typedef void (*il2cpp_unity_liveness_calculation_from_statics_ptr)(void* state);
il2cpp_unity_liveness_calculation_from_statics_ptr mil2cpp_unity_liveness_calculation_from_statics_ptr = NULL;
void il2cpp_unity_liveness_calculation_from_statics(void* state)
{
	 return mil2cpp_unity_liveness_calculation_from_statics_ptr(state);
}

///!const Il2CppType* il2cpp_method_get_return_type(const MethodInfo* method)
typedef const Il2CppType* (*il2cpp_method_get_return_type_ptr)(const MethodInfo* method);
il2cpp_method_get_return_type_ptr mil2cpp_method_get_return_type_ptr = NULL;
const Il2CppType* il2cpp_method_get_return_type(const MethodInfo* method)
{
	 return mil2cpp_method_get_return_type_ptr(method);
}

///!const MethodInfo* il2cpp_method_get_from_reflection(const Il2CppReflectionMethod *method)
typedef const MethodInfo* (*il2cpp_method_get_from_reflection_ptr)(const Il2CppReflectionMethod *method);
il2cpp_method_get_from_reflection_ptr mil2cpp_method_get_from_reflection_ptr = NULL;
const MethodInfo* il2cpp_method_get_from_reflection(const Il2CppReflectionMethod *method)
{
	 return mil2cpp_method_get_from_reflection_ptr(method);
}

///!Il2CppReflectionMethod* il2cpp_method_get_object(const MethodInfo *method, Il2CppClass *refclass)
typedef Il2CppReflectionMethod* (*il2cpp_method_get_object_ptr)(const MethodInfo *method, Il2CppClass *refclass);
il2cpp_method_get_object_ptr mil2cpp_method_get_object_ptr = NULL;
Il2CppReflectionMethod* il2cpp_method_get_object(const MethodInfo *method, Il2CppClass *refclass)
{
	 return mil2cpp_method_get_object_ptr(method,refclass);
}

///!const char* il2cpp_method_get_name(const MethodInfo *method)
typedef const char* (*il2cpp_method_get_name_ptr)(const MethodInfo *method);
il2cpp_method_get_name_ptr mil2cpp_method_get_name_ptr = NULL;
const char* il2cpp_method_get_name(const MethodInfo *method)
{
	 return mil2cpp_method_get_name_ptr(method);
}

///!bool il2cpp_method_is_generic(const MethodInfo *method)
typedef bool (*il2cpp_method_is_generic_ptr)(const MethodInfo *method);
il2cpp_method_is_generic_ptr mil2cpp_method_is_generic_ptr = NULL;
bool il2cpp_method_is_generic(const MethodInfo *method)
{
	 return mil2cpp_method_is_generic_ptr(method);
}

///!bool il2cpp_method_is_inflated(const MethodInfo *method)
typedef bool (*il2cpp_method_is_inflated_ptr)(const MethodInfo *method);
il2cpp_method_is_inflated_ptr mil2cpp_method_is_inflated_ptr = NULL;
bool il2cpp_method_is_inflated(const MethodInfo *method)
{
	 return mil2cpp_method_is_inflated_ptr(method);
}

///!bool il2cpp_method_is_instance(const MethodInfo *method)
typedef bool (*il2cpp_method_is_instance_ptr)(const MethodInfo *method);
il2cpp_method_is_instance_ptr mil2cpp_method_is_instance_ptr = NULL;
bool il2cpp_method_is_instance(const MethodInfo *method)
{
	 return mil2cpp_method_is_instance_ptr(method);
}

///!uint32_t il2cpp_method_get_param_count(const MethodInfo *method)
typedef uint32_t (*il2cpp_method_get_param_count_ptr)(const MethodInfo *method);
il2cpp_method_get_param_count_ptr mil2cpp_method_get_param_count_ptr = NULL;
uint32_t il2cpp_method_get_param_count(const MethodInfo *method)
{
	 return mil2cpp_method_get_param_count_ptr(method);
}

///!const Il2CppType* il2cpp_method_get_param(const MethodInfo *method, uint32_t index)
typedef const Il2CppType* (*il2cpp_method_get_param_ptr)(const MethodInfo *method, uint32_t index);
il2cpp_method_get_param_ptr mil2cpp_method_get_param_ptr = NULL;
const Il2CppType* il2cpp_method_get_param(const MethodInfo *method, uint32_t index)
{
	 return mil2cpp_method_get_param_ptr(method,index);
}

///!Il2CppClass* il2cpp_method_get_class(const MethodInfo *method)
typedef Il2CppClass* (*il2cpp_method_get_class_ptr)(const MethodInfo *method);
il2cpp_method_get_class_ptr mil2cpp_method_get_class_ptr = NULL;
Il2CppClass* il2cpp_method_get_class(const MethodInfo *method)
{
	 return mil2cpp_method_get_class_ptr(method);
}

///!bool il2cpp_method_has_attribute(const MethodInfo *method, Il2CppClass *attr_class)
typedef bool (*il2cpp_method_has_attribute_ptr)(const MethodInfo *method, Il2CppClass *attr_class);
il2cpp_method_has_attribute_ptr mil2cpp_method_has_attribute_ptr = NULL;
bool il2cpp_method_has_attribute(const MethodInfo *method, Il2CppClass *attr_class)
{
	 return mil2cpp_method_has_attribute_ptr(method,attr_class);
}

///!Il2CppClass* il2cpp_method_get_declaring_type(const MethodInfo* method)
typedef Il2CppClass* (*il2cpp_method_get_declaring_type_ptr)(const MethodInfo* method);
il2cpp_method_get_declaring_type_ptr mil2cpp_method_get_declaring_type_ptr = NULL;
Il2CppClass* il2cpp_method_get_declaring_type(const MethodInfo* method)
{
	 return mil2cpp_method_get_declaring_type_ptr(method);
}

///!uint32_t il2cpp_method_get_flags(const MethodInfo *method, uint32_t *iflags)
typedef uint32_t (*il2cpp_method_get_flags_ptr)(const MethodInfo *method, uint32_t *iflags);
il2cpp_method_get_flags_ptr mil2cpp_method_get_flags_ptr = NULL;
uint32_t il2cpp_method_get_flags(const MethodInfo *method, uint32_t *iflags)
{
	 return mil2cpp_method_get_flags_ptr(method,iflags);
}

///!uint32_t il2cpp_method_get_token(const MethodInfo *method)
typedef uint32_t (*il2cpp_method_get_token_ptr)(const MethodInfo *method);
il2cpp_method_get_token_ptr mil2cpp_method_get_token_ptr = NULL;
uint32_t il2cpp_method_get_token(const MethodInfo *method)
{
	 return mil2cpp_method_get_token_ptr(method);
}

///!const char *il2cpp_method_get_param_name(const MethodInfo *method, uint32_t index)
typedef const char* (*il2cpp_method_get_param_name_ptr)(const MethodInfo *method, uint32_t index);
il2cpp_method_get_param_name_ptr mil2cpp_method_get_param_name_ptr = NULL;
const char *il2cpp_method_get_param_name(const MethodInfo *method, uint32_t index)
{
	 return mil2cpp_method_get_param_name_ptr(method,index);
}

///!void il2cpp_profiler_install(Il2CppProfiler *prof, Il2CppProfileFunc shutdown_callback)
typedef void (*il2cpp_profiler_install_ptr)(Il2CppProfiler *prof, Il2CppProfileFunc shutdown_callback);
il2cpp_profiler_install_ptr mil2cpp_profiler_install_ptr = NULL;
void il2cpp_profiler_install(Il2CppProfiler *prof, Il2CppProfileFunc shutdown_callback)
{
	 return mil2cpp_profiler_install_ptr(prof,shutdown_callback);
}

///!void il2cpp_profiler_set_events(Il2CppProfileFlags events)
typedef void (*il2cpp_profiler_set_events_ptr)(Il2CppProfileFlags events);
il2cpp_profiler_set_events_ptr mil2cpp_profiler_set_events_ptr = NULL;
void il2cpp_profiler_set_events(Il2CppProfileFlags events)
{
	 return mil2cpp_profiler_set_events_ptr(events);
}

///!void il2cpp_profiler_install_enter_leave(Il2CppProfileMethodFunc enter, Il2CppProfileMethodFunc fleave)
typedef void (*il2cpp_profiler_install_enter_leave_ptr)(Il2CppProfileMethodFunc enter, Il2CppProfileMethodFunc fleave);
il2cpp_profiler_install_enter_leave_ptr mil2cpp_profiler_install_enter_leave_ptr = NULL;
void il2cpp_profiler_install_enter_leave(Il2CppProfileMethodFunc enter, Il2CppProfileMethodFunc fleave)
{
	 return mil2cpp_profiler_install_enter_leave_ptr(enter,fleave);
}

///!void il2cpp_profiler_install_allocation(Il2CppProfileAllocFunc callback)
typedef void (*il2cpp_profiler_install_allocation_ptr)(Il2CppProfileAllocFunc callback);
il2cpp_profiler_install_allocation_ptr mil2cpp_profiler_install_allocation_ptr = NULL;
void il2cpp_profiler_install_allocation(Il2CppProfileAllocFunc callback)
{
	 return mil2cpp_profiler_install_allocation_ptr(callback);
}

///!void il2cpp_profiler_install_gc(Il2CppProfileGCFunc callback, Il2CppProfileGCResizeFunc heap_resize_callback)
typedef void (*il2cpp_profiler_install_gc_ptr)(Il2CppProfileGCFunc callback, Il2CppProfileGCResizeFunc heap_resize_callback);
il2cpp_profiler_install_gc_ptr mil2cpp_profiler_install_gc_ptr = NULL;
void il2cpp_profiler_install_gc(Il2CppProfileGCFunc callback, Il2CppProfileGCResizeFunc heap_resize_callback)
{
	 return mil2cpp_profiler_install_gc_ptr(callback,heap_resize_callback);
}

///!void il2cpp_profiler_install_fileio(Il2CppProfileFileIOFunc callback)
typedef void (*il2cpp_profiler_install_fileio_ptr)(Il2CppProfileFileIOFunc callback);
il2cpp_profiler_install_fileio_ptr mil2cpp_profiler_install_fileio_ptr = NULL;
void il2cpp_profiler_install_fileio(Il2CppProfileFileIOFunc callback)
{
	 return mil2cpp_profiler_install_fileio_ptr(callback);
}

///!void il2cpp_profiler_install_thread(Il2CppProfileThreadFunc start, Il2CppProfileThreadFunc end)
typedef void (*il2cpp_profiler_install_thread_ptr)(Il2CppProfileThreadFunc start, Il2CppProfileThreadFunc end);
il2cpp_profiler_install_thread_ptr mil2cpp_profiler_install_thread_ptr = NULL;
void il2cpp_profiler_install_thread(Il2CppProfileThreadFunc start, Il2CppProfileThreadFunc end)
{
	 return mil2cpp_profiler_install_thread_ptr(start,end);
}

///!const char* il2cpp_property_get_name(PropertyInfo *prop)
typedef const char* (*il2cpp_property_get_name_ptr)(PropertyInfo *prop);
il2cpp_property_get_name_ptr mil2cpp_property_get_name_ptr = NULL;
const char* il2cpp_property_get_name(PropertyInfo *prop)
{
	 return mil2cpp_property_get_name_ptr(prop);
}

///!const MethodInfo* il2cpp_property_get_get_method(PropertyInfo *prop)
typedef const MethodInfo* (*il2cpp_property_get_get_method_ptr)(PropertyInfo *prop);
il2cpp_property_get_get_method_ptr mil2cpp_property_get_get_method_ptr = NULL;
const MethodInfo* il2cpp_property_get_get_method(PropertyInfo *prop)
{
	 return mil2cpp_property_get_get_method_ptr(prop);
}

///!const MethodInfo* il2cpp_property_get_set_method(PropertyInfo *prop)
typedef const MethodInfo* (*il2cpp_property_get_set_method_ptr)(PropertyInfo *prop);
il2cpp_property_get_set_method_ptr mil2cpp_property_get_set_method_ptr = NULL;
const MethodInfo* il2cpp_property_get_set_method(PropertyInfo *prop)
{
	 return mil2cpp_property_get_set_method_ptr(prop);
}

///!Il2CppClass* il2cpp_property_get_parent(PropertyInfo *prop)
typedef Il2CppClass* (*il2cpp_property_get_parent_ptr)(PropertyInfo *prop);
il2cpp_property_get_parent_ptr mil2cpp_property_get_parent_ptr = NULL;
Il2CppClass* il2cpp_property_get_parent(PropertyInfo *prop)
{
	 return mil2cpp_property_get_parent_ptr(prop);
}

///!uint32_t il2cpp_property_get_flags(PropertyInfo *prop)
typedef uint32_t (*il2cpp_property_get_flags_ptr)(PropertyInfo *prop);
il2cpp_property_get_flags_ptr mil2cpp_property_get_flags_ptr = NULL;
uint32_t il2cpp_property_get_flags(PropertyInfo *prop)
{
	 return mil2cpp_property_get_flags_ptr(prop);
}

///!Il2CppClass* il2cpp_object_get_class(Il2CppObject* obj)
typedef Il2CppClass* (*il2cpp_object_get_class_ptr)(Il2CppObject* obj);
il2cpp_object_get_class_ptr mil2cpp_object_get_class_ptr = NULL;
Il2CppClass* il2cpp_object_get_class(Il2CppObject* obj)
{
	 return mil2cpp_object_get_class_ptr(obj);
}

///!uint32_t il2cpp_object_get_size(Il2CppObject* obj)
typedef uint32_t (*il2cpp_object_get_size_ptr)(Il2CppObject* obj);
il2cpp_object_get_size_ptr mil2cpp_object_get_size_ptr = NULL;
uint32_t il2cpp_object_get_size(Il2CppObject* obj)
{
	 return mil2cpp_object_get_size_ptr(obj);
}

///!const MethodInfo* il2cpp_object_get_virtual_method(Il2CppObject *obj, const MethodInfo *method)
typedef const MethodInfo* (*il2cpp_object_get_virtual_method_ptr)(Il2CppObject *obj, const MethodInfo *method);
il2cpp_object_get_virtual_method_ptr mil2cpp_object_get_virtual_method_ptr = NULL;
const MethodInfo* il2cpp_object_get_virtual_method(Il2CppObject *obj, const MethodInfo *method)
{
	 return mil2cpp_object_get_virtual_method_ptr(obj,method);
}

///!Il2CppObject* il2cpp_object_new(const Il2CppClass *klass)
typedef Il2CppObject* (*il2cpp_object_new_ptr)(const Il2CppClass *klass);
il2cpp_object_new_ptr mil2cpp_object_new_ptr = NULL;
Il2CppObject* il2cpp_object_new(const Il2CppClass *klass)
{
	 return mil2cpp_object_new_ptr(klass);
}

///!void* il2cpp_object_unbox(Il2CppObject* obj)
typedef void* (*il2cpp_object_unbox_ptr)(Il2CppObject* obj);
il2cpp_object_unbox_ptr mil2cpp_object_unbox_ptr = NULL;
void* il2cpp_object_unbox(Il2CppObject* obj)
{
	 return mil2cpp_object_unbox_ptr(obj);
}

///!Il2CppObject* il2cpp_value_box(Il2CppClass *klass, void* data)
typedef Il2CppObject* (*il2cpp_value_box_ptr)(Il2CppClass *klass, void* data);
il2cpp_value_box_ptr mil2cpp_value_box_ptr = NULL;
Il2CppObject* il2cpp_value_box(Il2CppClass *klass, void* data)
{
	 return mil2cpp_value_box_ptr(klass,data);
}

///!void il2cpp_monitor_enter(Il2CppObject* obj)
typedef void (*il2cpp_monitor_enter_ptr)(Il2CppObject* obj);
il2cpp_monitor_enter_ptr mil2cpp_monitor_enter_ptr = NULL;
void il2cpp_monitor_enter(Il2CppObject* obj)
{
	 return mil2cpp_monitor_enter_ptr(obj);
}

///!bool il2cpp_monitor_try_enter(Il2CppObject* obj, uint32_t timeout)
typedef bool (*il2cpp_monitor_try_enter_ptr)(Il2CppObject* obj, uint32_t timeout);
il2cpp_monitor_try_enter_ptr mil2cpp_monitor_try_enter_ptr = NULL;
bool il2cpp_monitor_try_enter(Il2CppObject* obj, uint32_t timeout)
{
	 return mil2cpp_monitor_try_enter_ptr(obj,timeout);
}

///!void il2cpp_monitor_exit(Il2CppObject* obj)
typedef void (*il2cpp_monitor_exit_ptr)(Il2CppObject* obj);
il2cpp_monitor_exit_ptr mil2cpp_monitor_exit_ptr = NULL;
void il2cpp_monitor_exit(Il2CppObject* obj)
{
	 return mil2cpp_monitor_exit_ptr(obj);
}

///!void il2cpp_monitor_pulse(Il2CppObject* obj)
typedef void (*il2cpp_monitor_pulse_ptr)(Il2CppObject* obj);
il2cpp_monitor_pulse_ptr mil2cpp_monitor_pulse_ptr = NULL;
void il2cpp_monitor_pulse(Il2CppObject* obj)
{
	 return mil2cpp_monitor_pulse_ptr(obj);
}

///!void il2cpp_monitor_pulse_all(Il2CppObject* obj)
typedef void (*il2cpp_monitor_pulse_all_ptr)(Il2CppObject* obj);
il2cpp_monitor_pulse_all_ptr mil2cpp_monitor_pulse_all_ptr = NULL;
void il2cpp_monitor_pulse_all(Il2CppObject* obj)
{
	 return mil2cpp_monitor_pulse_all_ptr(obj);
}

///!void il2cpp_monitor_wait(Il2CppObject* obj)
typedef void (*il2cpp_monitor_wait_ptr)(Il2CppObject* obj);
il2cpp_monitor_wait_ptr mil2cpp_monitor_wait_ptr = NULL;
void il2cpp_monitor_wait(Il2CppObject* obj)
{
	 return mil2cpp_monitor_wait_ptr(obj);
}

///!bool il2cpp_monitor_try_wait(Il2CppObject* obj, uint32_t timeout)
typedef bool (*il2cpp_monitor_try_wait_ptr)(Il2CppObject* obj, uint32_t timeout);
il2cpp_monitor_try_wait_ptr mil2cpp_monitor_try_wait_ptr = NULL;
bool il2cpp_monitor_try_wait(Il2CppObject* obj, uint32_t timeout)
{
	 return mil2cpp_monitor_try_wait_ptr(obj,timeout);
}

///!Il2CppObject* il2cpp_runtime_invoke_convert_args(const MethodInfo *method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc)
typedef Il2CppObject* (*il2cpp_runtime_invoke_convert_args_ptr)(const MethodInfo *method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc);
il2cpp_runtime_invoke_convert_args_ptr mil2cpp_runtime_invoke_convert_args_ptr = NULL;
Il2CppObject* il2cpp_runtime_invoke_convert_args(const MethodInfo *method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc)
{
	 return mil2cpp_runtime_invoke_convert_args_ptr(method,obj,params,paramCount,exc);
}

///!Il2CppObject* il2cpp_runtime_invoke(const MethodInfo *method,void *obj, void **params, Il2CppException **exc)
typedef Il2CppObject* (*il2cpp_runtime_invoke_ptr)(const MethodInfo *method,void *obj, void **params, Il2CppException **exc);
il2cpp_runtime_invoke_ptr mil2cpp_runtime_invoke_ptr = NULL;
Il2CppObject* il2cpp_runtime_invoke(const MethodInfo *method,void *obj, void **params, Il2CppException **exc)
{
	 return mil2cpp_runtime_invoke_ptr(method,obj,params,exc);
}

///!void il2cpp_runtime_class_init(Il2CppClass* klass)
typedef void (*il2cpp_runtime_class_init_ptr)(Il2CppClass* klass);
il2cpp_runtime_class_init_ptr mil2cpp_runtime_class_init_ptr = NULL;
void il2cpp_runtime_class_init(Il2CppClass* klass)
{
	 return mil2cpp_runtime_class_init_ptr(klass);
}

///!void il2cpp_runtime_object_init(Il2CppObject *obj)
typedef void (*il2cpp_runtime_object_init_ptr)(Il2CppObject *obj);
il2cpp_runtime_object_init_ptr mil2cpp_runtime_object_init_ptr = NULL;
void il2cpp_runtime_object_init(Il2CppObject *obj)
{
	 return mil2cpp_runtime_object_init_ptr(obj);
}

///!void il2cpp_runtime_object_init_exception(Il2CppObject *obj, Il2CppException **exc)
typedef void (*il2cpp_runtime_object_init_exception_ptr)(Il2CppObject *obj, Il2CppException **exc);
il2cpp_runtime_object_init_exception_ptr mil2cpp_runtime_object_init_exception_ptr = NULL;
void il2cpp_runtime_object_init_exception(Il2CppObject *obj, Il2CppException **exc)
{
	 return mil2cpp_runtime_object_init_exception_ptr(obj,exc);
}

///!void il2cpp_runtime_unhandled_exception_policy_set(Il2CppRuntimeUnhandledExceptionPolicy value)
typedef void (*il2cpp_runtime_unhandled_exception_policy_set_ptr)(Il2CppRuntimeUnhandledExceptionPolicy value);
il2cpp_runtime_unhandled_exception_policy_set_ptr mil2cpp_runtime_unhandled_exception_policy_set_ptr = NULL;
void il2cpp_runtime_unhandled_exception_policy_set(Il2CppRuntimeUnhandledExceptionPolicy value)
{
	 return mil2cpp_runtime_unhandled_exception_policy_set_ptr(value);
}

///!int32_t il2cpp_string_length(Il2CppString* str)
typedef int32_t (*il2cpp_string_length_ptr)(Il2CppString* str);
il2cpp_string_length_ptr mil2cpp_string_length_ptr = NULL;
int32_t il2cpp_string_length(Il2CppString* str)
{
	 return mil2cpp_string_length_ptr(str);
}

///!Il2CppChar* il2cpp_string_chars(Il2CppString* str)
typedef Il2CppChar* (*il2cpp_string_chars_ptr)(Il2CppString* str);
il2cpp_string_chars_ptr mil2cpp_string_chars_ptr = NULL;
Il2CppChar* il2cpp_string_chars(Il2CppString* str)
{
	 return mil2cpp_string_chars_ptr(str);
}

///!Il2CppString* il2cpp_string_new(const char* str)
typedef Il2CppString* (*il2cpp_string_new_ptr)(const char* str);
il2cpp_string_new_ptr mil2cpp_string_new_ptr = NULL;
Il2CppString* il2cpp_string_new(const char* str)
{
	 return mil2cpp_string_new_ptr(str);
}

///!Il2CppString* il2cpp_string_new_wrapper(const char* str)
typedef Il2CppString* (*il2cpp_string_new_wrapper_ptr)(const char* str);
il2cpp_string_new_wrapper_ptr mil2cpp_string_new_wrapper_ptr = NULL;
Il2CppString* il2cpp_string_new_wrapper(const char* str)
{
	 return mil2cpp_string_new_wrapper_ptr(str);
}

///!Il2CppString* il2cpp_string_new_utf16(const Il2CppChar *text, int32_t len)
typedef Il2CppString* (*il2cpp_string_new_utf16_ptr)(const Il2CppChar *text, int32_t len);
il2cpp_string_new_utf16_ptr mil2cpp_string_new_utf16_ptr = NULL;
Il2CppString* il2cpp_string_new_utf16(const Il2CppChar *text, int32_t len)
{
	 return mil2cpp_string_new_utf16_ptr(text,len);
}

///!Il2CppString* il2cpp_string_new_len(const char* str, uint32_t length)
typedef Il2CppString* (*il2cpp_string_new_len_ptr)(const char* str, uint32_t length);
il2cpp_string_new_len_ptr mil2cpp_string_new_len_ptr = NULL;
Il2CppString* il2cpp_string_new_len(const char* str, uint32_t length)
{
	 return mil2cpp_string_new_len_ptr(str,length);
}

///!Il2CppString* il2cpp_string_intern(Il2CppString* str)
typedef Il2CppString* (*il2cpp_string_intern_ptr)(Il2CppString* str);
il2cpp_string_intern_ptr mil2cpp_string_intern_ptr = NULL;
Il2CppString* il2cpp_string_intern(Il2CppString* str)
{
	 return mil2cpp_string_intern_ptr(str);
}

///!Il2CppString* il2cpp_string_is_interned(Il2CppString* str)
typedef Il2CppString* (*il2cpp_string_is_interned_ptr)(Il2CppString* str);
il2cpp_string_is_interned_ptr mil2cpp_string_is_interned_ptr = NULL;
Il2CppString* il2cpp_string_is_interned(Il2CppString* str)
{
	 return mil2cpp_string_is_interned_ptr(str);
}

///!Il2CppThread *il2cpp_thread_current()
typedef Il2CppThread* (*il2cpp_thread_current_ptr)();
il2cpp_thread_current_ptr mil2cpp_thread_current_ptr = NULL;
Il2CppThread *il2cpp_thread_current()
{
	 return mil2cpp_thread_current_ptr();
}

///!Il2CppThread *il2cpp_thread_attach(Il2CppDomain *domain)
typedef Il2CppThread* (*il2cpp_thread_attach_ptr)(Il2CppDomain *domain);
il2cpp_thread_attach_ptr mil2cpp_thread_attach_ptr = NULL;
Il2CppThread *il2cpp_thread_attach(Il2CppDomain *domain)
{
	 return mil2cpp_thread_attach_ptr(domain);
}

///!void il2cpp_thread_detach(Il2CppThread *thread)
typedef void (*il2cpp_thread_detach_ptr)(Il2CppThread *thread);
il2cpp_thread_detach_ptr mil2cpp_thread_detach_ptr = NULL;
void il2cpp_thread_detach(Il2CppThread *thread)
{
	 return mil2cpp_thread_detach_ptr(thread);
}

///!Il2CppThread **il2cpp_thread_get_all_attached_threads(size_t *size)
typedef Il2CppThread** (*il2cpp_thread_get_all_attached_threads_ptr)(size_t *size);
il2cpp_thread_get_all_attached_threads_ptr mil2cpp_thread_get_all_attached_threads_ptr = NULL;
Il2CppThread **il2cpp_thread_get_all_attached_threads(size_t *size)
{
	 return mil2cpp_thread_get_all_attached_threads_ptr(size);
}

///!bool il2cpp_is_vm_thread(Il2CppThread *thread)
typedef bool (*il2cpp_is_vm_thread_ptr)(Il2CppThread *thread);
il2cpp_is_vm_thread_ptr mil2cpp_is_vm_thread_ptr = NULL;
bool il2cpp_is_vm_thread(Il2CppThread *thread)
{
	 return mil2cpp_is_vm_thread_ptr(thread);
}

///!void il2cpp_current_thread_walk_frame_stack(Il2CppFrameWalkFunc func, void* user_data)
typedef void (*il2cpp_current_thread_walk_frame_stack_ptr)(Il2CppFrameWalkFunc func, void* user_data);
il2cpp_current_thread_walk_frame_stack_ptr mil2cpp_current_thread_walk_frame_stack_ptr = NULL;
void il2cpp_current_thread_walk_frame_stack(Il2CppFrameWalkFunc func, void* user_data)
{
	 return mil2cpp_current_thread_walk_frame_stack_ptr(func,user_data);
}

///!void il2cpp_thread_walk_frame_stack(Il2CppThread *thread, Il2CppFrameWalkFunc func, void *user_data)
typedef void (*il2cpp_thread_walk_frame_stack_ptr)(Il2CppThread *thread, Il2CppFrameWalkFunc func, void *user_data);
il2cpp_thread_walk_frame_stack_ptr mil2cpp_thread_walk_frame_stack_ptr = NULL;
void il2cpp_thread_walk_frame_stack(Il2CppThread *thread, Il2CppFrameWalkFunc func, void *user_data)
{
	 return mil2cpp_thread_walk_frame_stack_ptr(thread,func,user_data);
}

///!bool il2cpp_current_thread_get_top_frame(Il2CppStackFrameInfo* frame)
typedef bool (*il2cpp_current_thread_get_top_frame_ptr)(Il2CppStackFrameInfo* frame);
il2cpp_current_thread_get_top_frame_ptr mil2cpp_current_thread_get_top_frame_ptr = NULL;
bool il2cpp_current_thread_get_top_frame(Il2CppStackFrameInfo* frame)
{
	 return mil2cpp_current_thread_get_top_frame_ptr(frame);
}

///!bool il2cpp_thread_get_top_frame(Il2CppThread* thread, Il2CppStackFrameInfo* frame)
typedef bool (*il2cpp_thread_get_top_frame_ptr)(Il2CppThread* thread, Il2CppStackFrameInfo* frame);
il2cpp_thread_get_top_frame_ptr mil2cpp_thread_get_top_frame_ptr = NULL;
bool il2cpp_thread_get_top_frame(Il2CppThread* thread, Il2CppStackFrameInfo* frame)
{
	 return mil2cpp_thread_get_top_frame_ptr(thread,frame);
}

///!bool il2cpp_current_thread_get_frame_at(int32_t offset, Il2CppStackFrameInfo* frame)
typedef bool (*il2cpp_current_thread_get_frame_at_ptr)(int32_t offset, Il2CppStackFrameInfo* frame);
il2cpp_current_thread_get_frame_at_ptr mil2cpp_current_thread_get_frame_at_ptr = NULL;
bool il2cpp_current_thread_get_frame_at(int32_t offset, Il2CppStackFrameInfo* frame)
{
	 return mil2cpp_current_thread_get_frame_at_ptr(offset,frame);
}

///!bool il2cpp_thread_get_frame_at(Il2CppThread* thread, int32_t offset, Il2CppStackFrameInfo* frame)
typedef bool (*il2cpp_thread_get_frame_at_ptr)(Il2CppThread* thread, int32_t offset, Il2CppStackFrameInfo* frame);
il2cpp_thread_get_frame_at_ptr mil2cpp_thread_get_frame_at_ptr = NULL;
bool il2cpp_thread_get_frame_at(Il2CppThread* thread, int32_t offset, Il2CppStackFrameInfo* frame)
{
	 return mil2cpp_thread_get_frame_at_ptr(thread,offset,frame);
}

///!int32_t il2cpp_current_thread_get_stack_depth()
typedef int32_t (*il2cpp_current_thread_get_stack_depth_ptr)();
il2cpp_current_thread_get_stack_depth_ptr mil2cpp_current_thread_get_stack_depth_ptr = NULL;
int32_t il2cpp_current_thread_get_stack_depth()
{
	 return mil2cpp_current_thread_get_stack_depth_ptr();
}

///!int32_t il2cpp_thread_get_stack_depth(Il2CppThread *thread)
typedef int32_t (*il2cpp_thread_get_stack_depth_ptr)(Il2CppThread *thread);
il2cpp_thread_get_stack_depth_ptr mil2cpp_thread_get_stack_depth_ptr = NULL;
int32_t il2cpp_thread_get_stack_depth(Il2CppThread *thread)
{
	 return mil2cpp_thread_get_stack_depth_ptr(thread);
}

///!Il2CppObject* il2cpp_type_get_object(const Il2CppType *type)
typedef Il2CppObject* (*il2cpp_type_get_object_ptr)(const Il2CppType *type);
il2cpp_type_get_object_ptr mil2cpp_type_get_object_ptr = NULL;
Il2CppObject* il2cpp_type_get_object(const Il2CppType *type)
{
	 return mil2cpp_type_get_object_ptr(type);
}

///!int il2cpp_type_get_type(const Il2CppType *type)
typedef int (*il2cpp_type_get_type_ptr)(const Il2CppType *type);
il2cpp_type_get_type_ptr mil2cpp_type_get_type_ptr = NULL;
int il2cpp_type_get_type(const Il2CppType *type)
{
	 return mil2cpp_type_get_type_ptr(type);
}

///!Il2CppClass* il2cpp_type_get_class_or_element_class(const Il2CppType *type)
typedef Il2CppClass* (*il2cpp_type_get_class_or_element_class_ptr)(const Il2CppType *type);
il2cpp_type_get_class_or_element_class_ptr mil2cpp_type_get_class_or_element_class_ptr = NULL;
Il2CppClass* il2cpp_type_get_class_or_element_class(const Il2CppType *type)
{
	 return mil2cpp_type_get_class_or_element_class_ptr(type);
}

///!char* il2cpp_type_get_name(const Il2CppType *type)
typedef char* (*il2cpp_type_get_name_ptr)(const Il2CppType *type);
il2cpp_type_get_name_ptr mil2cpp_type_get_name_ptr = NULL;
char* il2cpp_type_get_name(const Il2CppType *type)
{
	 return mil2cpp_type_get_name_ptr(type);
}

///!char* il2cpp_type_get_assembly_qualified_name(const Il2CppType * type)
typedef char* (*il2cpp_type_get_assembly_qualified_name_ptr)(const Il2CppType * type);
il2cpp_type_get_assembly_qualified_name_ptr mil2cpp_type_get_assembly_qualified_name_ptr = NULL;
char* il2cpp_type_get_assembly_qualified_name(const Il2CppType * type)
{
	 return mil2cpp_type_get_assembly_qualified_name_ptr(type);
}

///!bool il2cpp_type_is_byref(const Il2CppType *type)
typedef bool (*il2cpp_type_is_byref_ptr)(const Il2CppType *type);
il2cpp_type_is_byref_ptr mil2cpp_type_is_byref_ptr = NULL;
bool il2cpp_type_is_byref(const Il2CppType *type)
{
	 return mil2cpp_type_is_byref_ptr(type);
}

///!uint32_t il2cpp_type_get_attrs(const Il2CppType *type)
typedef uint32_t (*il2cpp_type_get_attrs_ptr)(const Il2CppType *type);
il2cpp_type_get_attrs_ptr mil2cpp_type_get_attrs_ptr = NULL;
uint32_t il2cpp_type_get_attrs(const Il2CppType *type)
{
	 return mil2cpp_type_get_attrs_ptr(type);
}

///!bool il2cpp_type_equals(const Il2CppType* type, const Il2CppType *otherType)
typedef bool (*il2cpp_type_equals_ptr)(const Il2CppType* type, const Il2CppType *otherType);
il2cpp_type_equals_ptr mil2cpp_type_equals_ptr = NULL;
bool il2cpp_type_equals(const Il2CppType* type, const Il2CppType *otherType)
{
	 return mil2cpp_type_equals_ptr(type,otherType);
}

///!const Il2CppAssembly* il2cpp_image_get_assembly(const Il2CppImage *image)
typedef const Il2CppAssembly* (*il2cpp_image_get_assembly_ptr)(const Il2CppImage *image);
il2cpp_image_get_assembly_ptr mil2cpp_image_get_assembly_ptr = NULL;
const Il2CppAssembly* il2cpp_image_get_assembly(const Il2CppImage *image)
{
	 return mil2cpp_image_get_assembly_ptr(image);
}

///!const char* il2cpp_image_get_name(const Il2CppImage *image)
typedef const char* (*il2cpp_image_get_name_ptr)(const Il2CppImage *image);
il2cpp_image_get_name_ptr mil2cpp_image_get_name_ptr = NULL;
const char* il2cpp_image_get_name(const Il2CppImage *image)
{
	 return mil2cpp_image_get_name_ptr(image);
}

///!const char* il2cpp_image_get_filename(const Il2CppImage *image)
typedef const char* (*il2cpp_image_get_filename_ptr)(const Il2CppImage *image);
il2cpp_image_get_filename_ptr mil2cpp_image_get_filename_ptr = NULL;
const char* il2cpp_image_get_filename(const Il2CppImage *image)
{
	 return mil2cpp_image_get_filename_ptr(image);
}

///!const MethodInfo* il2cpp_image_get_entry_point(const Il2CppImage *image)
typedef const MethodInfo* (*il2cpp_image_get_entry_point_ptr)(const Il2CppImage *image);
il2cpp_image_get_entry_point_ptr mil2cpp_image_get_entry_point_ptr = NULL;
const MethodInfo* il2cpp_image_get_entry_point(const Il2CppImage *image)
{
	 return mil2cpp_image_get_entry_point_ptr(image);
}

///!size_t il2cpp_image_get_class_count(const Il2CppImage * image)
typedef size_t (*il2cpp_image_get_class_count_ptr)(const Il2CppImage * image);
il2cpp_image_get_class_count_ptr mil2cpp_image_get_class_count_ptr = NULL;
size_t il2cpp_image_get_class_count(const Il2CppImage * image)
{
	 return mil2cpp_image_get_class_count_ptr(image);
}

///!const Il2CppClass* il2cpp_image_get_class(const Il2CppImage * image, size_t index)
typedef const Il2CppClass* (*il2cpp_image_get_class_ptr)(const Il2CppImage * image, size_t index);
il2cpp_image_get_class_ptr mil2cpp_image_get_class_ptr = NULL;
const Il2CppClass* il2cpp_image_get_class(const Il2CppImage * image, size_t index)
{
	 return mil2cpp_image_get_class_ptr(image,index);
}

///!Il2CppManagedMemorySnapshot* il2cpp_capture_memory_snapshot()
typedef Il2CppManagedMemorySnapshot* (*il2cpp_capture_memory_snapshot_ptr)();
il2cpp_capture_memory_snapshot_ptr mil2cpp_capture_memory_snapshot_ptr = NULL;
Il2CppManagedMemorySnapshot* il2cpp_capture_memory_snapshot()
{
	 return mil2cpp_capture_memory_snapshot_ptr();
}

///!void il2cpp_free_captured_memory_snapshot(Il2CppManagedMemorySnapshot* snapshot)
typedef void (*il2cpp_free_captured_memory_snapshot_ptr)(Il2CppManagedMemorySnapshot* snapshot);
il2cpp_free_captured_memory_snapshot_ptr mil2cpp_free_captured_memory_snapshot_ptr = NULL;
void il2cpp_free_captured_memory_snapshot(Il2CppManagedMemorySnapshot* snapshot)
{
	 return mil2cpp_free_captured_memory_snapshot_ptr(snapshot);
}

///!void il2cpp_set_find_plugin_callback(Il2CppSetFindPlugInCallback method)
typedef void (*il2cpp_set_find_plugin_callback_ptr)(Il2CppSetFindPlugInCallback method);
il2cpp_set_find_plugin_callback_ptr mil2cpp_set_find_plugin_callback_ptr = NULL;
void il2cpp_set_find_plugin_callback(Il2CppSetFindPlugInCallback method)
{
	 return mil2cpp_set_find_plugin_callback_ptr(method);
}

///!void il2cpp_register_log_callback(Il2CppLogCallback method)
typedef void (*il2cpp_register_log_callback_ptr)(Il2CppLogCallback method);
il2cpp_register_log_callback_ptr mil2cpp_register_log_callback_ptr = NULL;
void il2cpp_register_log_callback(Il2CppLogCallback method)
{
	 return mil2cpp_register_log_callback_ptr(method);
}

///!void il2cpp_debugger_set_agent_options(const char* options)
typedef void (*il2cpp_debugger_set_agent_options_ptr)(const char* options);
il2cpp_debugger_set_agent_options_ptr mil2cpp_debugger_set_agent_options_ptr = NULL;
void il2cpp_debugger_set_agent_options(const char* options)
{
	 return mil2cpp_debugger_set_agent_options_ptr(options);
}

///!bool il2cpp_is_debugger_attached()
typedef bool (*il2cpp_is_debugger_attached_ptr)();
il2cpp_is_debugger_attached_ptr mil2cpp_is_debugger_attached_ptr = NULL;
bool il2cpp_is_debugger_attached()
{
	 return mil2cpp_is_debugger_attached_ptr();
}

///!void il2cpp_unity_install_unitytls_interface(const void* unitytlsInterfaceStruct)
typedef void (*il2cpp_unity_install_unitytls_interface_ptr)(const void* unitytlsInterfaceStruct);
il2cpp_unity_install_unitytls_interface_ptr mil2cpp_unity_install_unitytls_interface_ptr = NULL;
void il2cpp_unity_install_unitytls_interface(const void* unitytlsInterfaceStruct)
{
	 return mil2cpp_unity_install_unitytls_interface_ptr(unitytlsInterfaceStruct);
}

///!Il2CppCustomAttrInfo* il2cpp_custom_attrs_from_class(Il2CppClass *klass)
typedef Il2CppCustomAttrInfo* (*il2cpp_custom_attrs_from_class_ptr)(Il2CppClass *klass);
il2cpp_custom_attrs_from_class_ptr mil2cpp_custom_attrs_from_class_ptr = NULL;
Il2CppCustomAttrInfo* il2cpp_custom_attrs_from_class(Il2CppClass *klass)
{
	 return mil2cpp_custom_attrs_from_class_ptr(klass);
}

///!Il2CppCustomAttrInfo* il2cpp_custom_attrs_from_method(const MethodInfo * method)
typedef Il2CppCustomAttrInfo* (*il2cpp_custom_attrs_from_method_ptr)(const MethodInfo * method);
il2cpp_custom_attrs_from_method_ptr mil2cpp_custom_attrs_from_method_ptr = NULL;
Il2CppCustomAttrInfo* il2cpp_custom_attrs_from_method(const MethodInfo * method)
{
	 return mil2cpp_custom_attrs_from_method_ptr(method);
}

///!bool il2cpp_custom_attrs_has_attr(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass)
typedef bool (*il2cpp_custom_attrs_has_attr_ptr)(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass);
il2cpp_custom_attrs_has_attr_ptr mil2cpp_custom_attrs_has_attr_ptr = NULL;
bool il2cpp_custom_attrs_has_attr(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass)
{
	 return mil2cpp_custom_attrs_has_attr_ptr(ainfo,attr_klass);
}

///!Il2CppObject* il2cpp_custom_attrs_get_attr(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass)
typedef Il2CppObject* (*il2cpp_custom_attrs_get_attr_ptr)(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass);
il2cpp_custom_attrs_get_attr_ptr mil2cpp_custom_attrs_get_attr_ptr = NULL;
Il2CppObject* il2cpp_custom_attrs_get_attr(Il2CppCustomAttrInfo *ainfo, Il2CppClass *attr_klass)
{
	 return mil2cpp_custom_attrs_get_attr_ptr(ainfo,attr_klass);
}

///!Il2CppArray*  il2cpp_custom_attrs_construct(Il2CppCustomAttrInfo *ainfo)
typedef Il2CppArray*  (*il2cpp_custom_attrs_construct_ptr)(Il2CppCustomAttrInfo *ainfo);
il2cpp_custom_attrs_construct_ptr mil2cpp_custom_attrs_construct_ptr = NULL;
Il2CppArray*  il2cpp_custom_attrs_construct(Il2CppCustomAttrInfo *ainfo)
{
	 return mil2cpp_custom_attrs_construct_ptr(ainfo);
}

///!void il2cpp_custom_attrs_free(Il2CppCustomAttrInfo *ainfo)
typedef void (*il2cpp_custom_attrs_free_ptr)(Il2CppCustomAttrInfo *ainfo);
il2cpp_custom_attrs_free_ptr mil2cpp_custom_attrs_free_ptr = NULL;
void il2cpp_custom_attrs_free(Il2CppCustomAttrInfo *ainfo)
{
	 return mil2cpp_custom_attrs_free_ptr(ainfo);
}

