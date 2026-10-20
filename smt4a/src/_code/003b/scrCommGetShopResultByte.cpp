#include "shard/Shard003B.h"

extern "C" {

typedef struct ShopResult {
    /* 0x00000 */ u8 unk00000[0x1604C];
    /* 0x1604C */ u8 unk1604C;
} ShopResult;

extern ShopResult *shopGetResult(void);
extern void scrSetResult(u32 value);

/* Script command: result is the shop result byte at +0x1604C. */
u32 scrCommGetShopResultByte(void)
{
    scrSetResult(shopGetResult()->unk1604C);
    return 1;
}

} /* extern "C" */
