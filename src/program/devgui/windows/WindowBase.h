#pragma once

#include "imgui.h"

#include "container/seadPtrArray.h"
#include "game/HakoniwaSequence/HakoniwaSequence.h"
#include "game/System/GameSystem.h"
#include "heap/seadHeap.h"
#include "math/seadVector.h"

#include "program/GetterUtil.h"
#include "program/devgui/DevGuiWindowConfig.h"
#include "program/devgui/categories/CategoryBase.h"

class WindowBase {
public:
    WindowBase(const char* winName, sead::Heap* heap);

    virtual void updateWin();
    virtual void updateWinDisplay();
    virtual void configImGuiStyle();

    virtual const char* getWindowName() { return mWinName; };
    virtual int getCategoryCount() { return mCategories.size(); };

protected:
    sead::Heap* mDevGuiHeap;
    DevGuiWindowConfig mConfig;
    const char* mWinName = "null";

    int mCategoryIdx = 0;
    sead::PtrArray<CategoryBase> mCategories;
};