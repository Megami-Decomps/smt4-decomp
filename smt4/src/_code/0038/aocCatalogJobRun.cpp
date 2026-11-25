/* NON_MATCHING: 199 lines (shape 139); the port of smt4a aocCatalogJobRun. Retail also gives the by-value
 * results one slot each above the sort strings (the result at sp+1224, the label at sp+1232, frame 1364) where this
 * build overlays them on the outgoing argument at the bottom of the frame (1348), and keeps &now in r9. */
#include <stdio.h>
#include "addon/AocBufferRequest.h"
#include "addon/AocCatalogQuery.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "shard/W6_W6Match8_DateTimeValue.h"
#include "sys/WindowStatusCheck.h"

extern "C" {

WindowStatusResult archiveFileReplaceHandle(void *file, const void *archive);
void recordClearWideHandle(void *file);
u16 halfPair48LowByteA(void *file);
u16 halfPair48LowByteB(void *file);
AocCatalogQuery *aocCatalogQueryInit(AocCatalogQuery *query, void *buffer, u32 bytes);
WindowStatusResult aocServiceQueryCatalog(AocBufferRequest *request, u32 offset, u32 count, AocCatalogQuery *query);
WindowStatusResult FUN_003531dc(void *owner, DateTimeValue *output);
s32 stringFormatUnbounded(char *buffer, const char *format, ...);
void aocApplicationRecreatePrimaryRequest(AocMain *app);
WindowStatusResult resourceLoadDisplayMetadata(AocMain *main);
nn::Result aocCatalogBuildContentRecords(AocCatalogJob *job);
u32 FUN_003df36c(AocBufferRequest *request);
u32 recordGetOptionalValue(AocBufferRequest *request);
s32 nn_fnd_DateTime_GetDay(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_GetMonth(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_GetYear(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day); // declcheck: local (declared with the three date getters above, which protos__code.h cannot give)

enum {
    CATALOG_PAGE = 64  /* entries one catalog query returns */
};

/* Leaves `result` in the job; true when it is a failure. */
static __inline bool jobSetResult(AocCatalogJob *job, WindowStatusResult result)
{
    job->result = result;
    return windowStatusFailed(job->result);
}

/* Runs the shop's catalog job: opens the content file, asks the service for the sale catalog sorted by
 * SET_SALE_INDEX (a page of CATALOG_PAGE entries, again from the last page when the offset is past the end), reads
 * the service's date into the job and hands over to the entry pass. Every step leaves its result in the job. */
void aocCatalogJobRun(AocCatalogJob *job)
{
    AocMain *app = g_aocMain;
    char buffer[0x400];
    AocCatalogSort sort;

    if (jobSetResult(job, archiveFileReplaceHandle(app->contentFile, app->contentArchive))) {
        return;
    }
    AocCatalogQuery query;
    aocCatalogQueryInit(&query, buffer, sizeof(buffer));
    query.sorted = 1;
    app->attributeNames[0] = aocItemAttributeLabel(0, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[1] = aocItemAttributeLabel(2, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[2] = aocItemAttributeLabel(3, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[3] = aocItemAttributeLabel(5, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    stringFormatUnbounded(app->attributeNames[4].text, "%s", "SET_SALE_INDEX");
    stringFormatUnbounded(app->attributeNames[5].text, "%s", "SET_SALE_NEW");
    stringFormatUnbounded(app->attributeNames[6].text, "%s", "SET_SALE_PRICE");
    stringFormatUnbounded(app->attributeNames[7].text, "%s", "SET_SALE_ECARD");
    stringFormatUnbounded(app->attributeNames[8].text, "%s", "SET_SALE_CHANGE");
    query.attributes = app->attributeNames;
    query.attributeCount = 9;
    if (app->catalogFilterCount != 0) {
        query.filterCount = app->catalogFilterCount;
        query.filter = app->catalogFilter;
    }
    aocApplicationRecreatePrimaryRequest(app);
    sprintf(sort.order, "ascending");
    sprintf(sort.attribute, "SET_SALE_INDEX");
    sprintf(sort.type, "integer");
    query.sort = &sort;
    for (;;) {
        if (jobSetResult(job, aocServiceQueryCatalog(app->contentRequest, app->catalogOffset, CATALOG_PAGE, &query))) {
            recordClearWideHandle(app->contentFile);
            return;
        }
        if (recordGetOptionalValue(app->contentRequest) > app->catalogOffset || recordGetOptionalValue(app->contentRequest) == 0) {
            break;
        }
        /* past the end: ask again from the last page */
        app->catalogOffset = ((recordGetOptionalValue(app->contentRequest) + CATALOG_PAGE - 1) / CATALOG_PAGE - 1) * CATALOG_PAGE;
    }
    app->recordCount = FUN_003df36c(app->contentRequest);
    app->catalogTotal = recordGetOptionalValue(app->contentRequest);
    app->catalogTotal = recordGetOptionalValue(app->contentRequest);  /* retail reads and stores it twice */

    DateTimeValue now;
    now.milliseconds = 0;
    if (jobSetResult(job, FUN_003531dc(app->serviceClock, &now))) {
        recordClearWideHandle(app->contentFile);
        return;
    }
    job->today = nn_fnd_DateTime_DateToDays(nn_fnd_DateTime_GetYear(&now), nn_fnd_DateTime_GetMonth(&now),
                                            nn_fnd_DateTime_GetDay(&now));
    nn::Result entries = aocCatalogBuildContentRecords(job);
    recordClearWideHandle(app->contentFile);
    if (nnResultIsSuccess(entries)) {
        jobSetResult(job, resourceLoadDisplayMetadata(app));
    }
}

} /* extern "C" */
