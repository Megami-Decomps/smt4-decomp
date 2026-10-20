#include "common.h"

extern "C" {

extern const u8 DAT_0055affc[];  /* vtable */
void strDuplicateInto(u32 *member, u32 value);

typedef struct Object55affc {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 member04;
} Object55affc;

/* Copy constructor: sets the vtable and copies the member at 4 through strDuplicateInto. */
Object55affc *onlineStringCopyConstruct(Object55affc *self, const Object55affc *source)
{
    self->vtbl = DAT_0055affc;
    strDuplicateInto(&self->member04, source->member04);
    return self;
}

} /* extern "C" */
