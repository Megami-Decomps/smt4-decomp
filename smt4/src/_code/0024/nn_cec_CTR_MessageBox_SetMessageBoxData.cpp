#include "shard/CecMessageBox.h"

extern "C" {

extern u32 nn_cec_CTR_MessageBox_WriteMessageBoxInfo(MessageBox *box);

/* Stores a message box info byte (ids 0x8C-0x8F) or writes a data record (ids 0x65-0xC7); returns an nn::Result. */
u32 nn_cec_CTR_MessageBox_SetMessageBoxData(MessageBox *box, u32 id, u8 *data, u32 size)
{
    u32 result;
    u32 boxId;

    boxId = box->id;
    if (boxId == 0) {
        result = 0xc8810bea;
    } else if (size >= 0x2801) {
        result = 0xc8e10be9;
    } else {
        if (id == 0x8c) {
            box->infoA = *data;
            result = nn_cec_CTR_MessageBox_WriteMessageBoxInfo(box);
            return result;
        }
        if (id == 0x8d) {
            box->infoB = *data;
            result = nn_cec_CTR_MessageBox_WriteMessageBoxInfo(box);
            return result;
        }
        if (id == 0x8e) {
            box->infoC = *data;
            result = nn_cec_CTR_MessageBox_WriteMessageBoxInfo(box);
            return result;
        }
        if (id == 0x8f) {
            box->infoD = *data;
            result = nn_cec_CTR_MessageBox_WriteMessageBoxInfo(box);
            return result;
        }
        if (id - 0x65 >= 99) {
            result = 0xe0e10bfd;
        } else {
            if (size == 0 || data == NULL) {
                result = box->vtbl->remove(box, boxId, id, 0, 0, 0);
                return result;
            }
            result = box->vtbl->writeList(box, data, size, boxId, id, 0x14);
        }
    }
    return result;
}

} /* extern "C" */
