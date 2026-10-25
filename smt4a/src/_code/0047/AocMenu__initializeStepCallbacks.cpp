/* NON_MATCHING: compiler coalesces the three null member-pointer constants, shifting the callback literal table. */
#include "classes/AocMenu.h"

// Install update, draw and completion callbacks for the add-on menu's 21 steps.
void AocMenu::initializeStepCallbacks()
{
    for (s32 i = 0; i < 21; ++i) {
        callbacks.update[i] = NULL;
        callbacks.draw[i] = NULL;
        callbacks.finish[i] = NULL;
    }
    callbacks.update[0] = &AocMenu::openPurchaseList;
    callbacks.update[1] = &AocMenu::restartPreviousRun;
    callbacks.update[2] = &AocMenu::runQuestDialog;
    callbacks.update[3] = &AocMenu::runConfirmation;
    callbacks.update[4] = &AocMenu::runConnectedProcess;
    callbacks.update[5] = &AocMenu::runWindowOperation;
    callbacks.update[6] = &AocMenu::runMainProcess;
    callbacks.update[7] = &AocMenu::runResultProcess;
    callbacks.update[8] = &AocMenu::runQueryProcess;
    callbacks.update[9] = &AocMenu::runScriptMenu;
    callbacks.update[10] = &AocMenu::readContentCode;
    callbacks.update[11] = &AocMenu::closeMenu;
    callbacks.update[12] = &AocMenu::pollContentStatus;
    callbacks.update[13] = &AocMenu::waitCloseAnimation;
    callbacks.update[14] = &AocMenu::runLicenseFlow;
    callbacks.update[15] = &AocMenu::runPurchaseList;
    callbacks.update[16] = &AocMenu::releaseStepResources;
    callbacks.update[17] = &AocMenu::returnToScript;
    callbacks.update[18] = &AocMenu::leaveWhenAocFree;
    callbacks.update[19] = &AocMenu::updateRequestTransition;
    callbacks.draw[2] = &AocMenu::beginWindowOperation;
    callbacks.draw[6] = &AocMenu::drawMenu;
    callbacks.draw[7] = &AocMenu::drawMenu;
    callbacks.draw[8] = &AocMenu::drawMenu;
    callbacks.draw[9] = &AocMenu::drawMenu;
    callbacks.draw[12] = &AocMenu::drawMenu;
    callbacks.draw[13] = &AocMenu::drawMenu;
    callbacks.finish[6] = &AocMenu::drawSelection;
    callbacks.finish[7] = &AocMenu::drawSelection;
    callbacks.finish[8] = &AocMenu::drawSelection;
    callbacks.finish[9] = &AocMenu::drawSelection;
    callbacks.finish[12] = &AocMenu::drawSelection;
    callbacks.finish[13] = &AocMenu::drawSelection;
    callbacks.finish[17] = &AocMenu::endRequestTransition;
    callbacks.finish[19] = &AocMenu::endWindowOperation;
}