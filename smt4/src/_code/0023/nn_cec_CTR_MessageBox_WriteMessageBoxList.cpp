#include "shard/CecMessageBox.h"

extern "C" {

/* Reads the box's key, then writes its list (and, if that succeeded, the keyed list). */
u32 nn_cec_CTR_MessageBox_WriteMessageBoxList(MessageBox *box)
{
    u32 key;
    u32 result;
    u32 failed;

    box->vtbl->read(box, box->id, 10, 8, &key);
    result = box->vtbl->writeList(box, box->list, 0x18c, box->id, 1, 0x14);
    failed = result >> 0x1f;
    if (failed == 0) {
        result = box->vtbl->writeListKeyed(box, box->list, 0x18c, &key, box->id, 1, 0x12);
    }
    return result;
}

} /* extern "C" */
