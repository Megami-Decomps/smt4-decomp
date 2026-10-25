#include "common.h"
#include "shard/S3AsdModelAttr.h"

extern "C" {

void resourceListDestroy(void *handle);
void asdMemFree(void *ptr);
void FUN_001ad2a4(AsdModelAttrModel *model, u8 *data, s32 key);

/* Releases the model's attribute records, then rebuilds them for `key`. */
void FUN_001ad22c(AsdModelAttrModel *model, s32 key)
{
    if (model->records.count != 0) {
        for (s32 i = 0; i < model->records.count; i++) {
            AsdModelAttrRecord *record = &model->records.items[i];
            resourceListDestroy(record->handle);
            record->handle = NULL;
        }
    }
    if (model->records.items != NULL) {
        asdMemFree(model->records.items);
        model->records.items = NULL;
    }
    model->records.count = 0;
    FUN_001ad2a4(model, model->file->data, key);
}

} /* extern "C" */
