#include "shard/Shard0037.h"

extern "C" {

extern u32 messageDismissNumericBanner(s32 value);

void messageDismissNumericBannerForced(void)
{
    messageDismissNumericBanner(1);
}

} /* extern "C" */
