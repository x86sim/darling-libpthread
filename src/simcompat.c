/*
 * iOS simulator (iOS 26) compatibility exports for libsystem_pthread.
 */

#include <stdint.h>
#include <sched.h>

typedef unsigned long pthread_priority_t;

int _pthread_workqueue_addthreads(int numthreads, pthread_priority_t priority);

#define EXPORT __attribute__((visibility("default")))

EXPORT void pthread_yield_np(void)
{
	sched_yield();
}

// Workgroups (os_workgroup) are not supported; accepting the callbacks is enough
EXPORT int pthread_install_workgroup_functions_np(const void* functions)
{
	return 0;
}

// x86Sim: _pthread_workqueue_add_cooperativethreads is in pthread.c (cooperative pool)
