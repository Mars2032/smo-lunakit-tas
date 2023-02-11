#pragma once

#include "imgui.h"

#include "al/actor/LiveActorKit.h"

#include "game/System/GameSystem.h"
#include "game/System/Application.h"

#include "program/devgui/DevGuiWindowConfig.h"
#include "program/devgui/windows/WindowBase.h"

class WindowMemoryManage : public WindowBase {
public:
    WindowMemoryManage(const char* winName, sead::Heap* heap);

    void updateWinDisplay() override;
    void configImGuiStyle() override;

private:
    float getHeapPercent(sead::Heap* heap);
    void drawProgressBarPerc(float percent, const char* header);
    void drawProgressBarFrac(int current, int max, const char* header);
};