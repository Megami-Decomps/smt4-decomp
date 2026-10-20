#include "common.h"

extern "C" {

int QcUtility_BuildTabList(int list, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

typedef struct Obj {
    /* 0x0 */ u8 unk0[9];
    /* 0x9 */ u8 tabMask;
} Obj;

int FUN_00381490(Obj *obj, u32 tab, u32 b, u32 c, u32 d, u32 e)
{
    int result = QcUtility_BuildTabList((int)obj, tab, b, 0xffffffff, c, d, e);

    obj->tabMask = (u8)((1 << (tab & 0xff)) | obj->tabMask);
    return result;
}

} /* extern "C" */
