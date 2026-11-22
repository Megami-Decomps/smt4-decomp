#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void resourceListDestroy(void *handle);
void asdMemFree(void *ptr);
void asdModelBuildAttributeRecordsForKey(AsdMdlNode *model, u8 *data, s32 key);

/* Releases the model's attribute records, then rebuilds them for `key`. */
void asdModelRebuildAttributeRecords(AsdMdlNode *model, s32 key)
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
    asdModelBuildAttributeRecordsForKey(model, model->file->data, key);
}

} /* extern "C" */
