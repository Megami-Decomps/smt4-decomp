#include "shard/Shard0044.h"

extern "C" {

typedef struct IfaceHolder {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[8];
    /* 0x00C */ u32 first0;
    /* 0x010 */ u32 first1;
    /* 0x014 */ u32 second0;
    /* 0x018 */ u32 second1;
    /* 0x01C */ u32 first2;
    /* 0x020 */ u32 second2;
    /* 0x024 */ u32 first3;
    /* 0x028 */ u32 second3;
    /* 0x02C */ u8 unk02C[0x1DC];
    /* 0x208 */ VIface *iface;
    /* 0x20C */ u32 arg;
} IfaceHolder;

extern u8 DAT_0055b620;

/* Destroy hook: restores the vtable, releases through the interface and clears the four handle pairs. */
IfaceHolder *ifaceHolderDestroy(IfaceHolder *obj)
{
    obj->vtbl = &DAT_0055b620;
    obj->iface->vtbl->slot3(obj->iface, obj->arg);
    if (obj->first0 != 0) {
        obj->first0 = 0;
        obj->second0 = 0;
    }
    if (obj->first1 != 0) {
        obj->first1 = 0;
        obj->second1 = 0;
    }
    if (obj->first2 != 0) {
        obj->first2 = 0;
        obj->second2 = 0;
    }
    if (obj->first3 != 0) {
        obj->first3 = 0;
        obj->second3 = 0;
    }
    return obj;
}

} /* extern "C" */
