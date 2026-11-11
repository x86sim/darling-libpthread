/*
 * iOS simulator (iOS 26) compatibility exports for libsystem_pthread.
 */

#define EXPORT __attribute__((visibility("default")))

// Workgroups (os_workgroup) are not supported; accepting the callbacks is enough
EXPORT int pthread_install_workgroup_functions_np(const void* functions)
{
	return 0;
}

