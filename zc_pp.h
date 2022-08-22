#ifndef ZZ_PP_H
#define ZZ_PP_H

#define zc_array_size(arr) (sizeof(arr) / sizeof((arr)[0]))

/**
 * zc_container_of - cast a member of a structure out to the containing
 * structure
 * @ptr:	the pointer to the member.
 * @type:	the type of the container struct this is embedded in.
 * @member:	the name of the member within the struct.
 *
 */
#define zc_container_of(ptr, type, member)                                     \
    ({                                                                         \
        char *__mptr = (char *)(ptr);                                          \
        ((type *)(__mptr - offsetof(type, member)));                           \
    })

/**
 * zc_container_of_safe - cast a member of a structure out to the containing
 * structure
 * @ptr:	the pointer to the member.
 * @type:	the type of the container struct this is embedded in.
 * @member:	the name of the member within the struct.
 *
 * Return NULL if ptr is NULL.
 */
#define zc_container_of_safe(ptr, type, member)                                \
    ({                                                                         \
        char *__mptr = (char *)(ptr);                                          \
        __mptr == NULL ? (type *)__mptr                                        \
                       : ((type *)(__mptr - offsetof(type, member)));          \
    })

#endif
