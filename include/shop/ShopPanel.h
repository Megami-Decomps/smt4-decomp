#ifndef SHOP_SHOPPANEL_H
#define SHOP_SHOPPANEL_H
#include "common.h"

// The shop page's scroll panel. The list draws through slot four after positioning the cursor.
class ShopPanel {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void update(const void *cursor);   /* follows the category's list cursor */
    virtual void refresh(u32 color);
    /* 0x04 */ u8 unk04Data[0x3C];
    /* 0x40 */ s32 firstRow;
    /* 0x44 */ s32 selectedRow;
};
extern "C" void FUN_002332e8(ShopPanel *panel, s32 first, s32 selected);
#endif
