#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xboot.h>

struct resource_t
{
	/* The resource name */
	char * name;

	/* The resource id */
	int id;

	/* The resource data */
	void * data;

	/* Kobj binding */
	struct kobj_t * kobj;
};

typedef bool_t (*resource_callback_t)(struct resource_t * res);

bool_t register_resource(struct resource_t * res);
bool_t unregister_resource(struct resource_t * res);
void resource_callback_with_name(const char * name, resource_callback_t cb);

#ifdef __cplusplus
}
#endif

#endif /* __RESOURCE_H__ */
