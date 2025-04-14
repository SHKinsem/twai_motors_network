// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: HelloBalls_ui

#ifndef _HELLOBALLS_UI_UI_H
#define _HELLOBALLS_UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

void Appear_Animation(lv_obj_t * TargetObject, int delay);
void ChangeButtonPos_Animation(lv_obj_t * TargetObject, int delay);
void ChangeButtonBack_Animation(lv_obj_t * TargetObject, int delay);
void Disappear_Animation(lv_obj_t * TargetObject, int delay);

// SCREEN: ui_ScreenMainMenu
void ui_ScreenMainMenu_screen_init(void);
extern lv_obj_t * ui_ScreenMainMenu;
extern lv_obj_t * ui_MainMenuTextareaTextArea2;
extern lv_obj_t * ui_MainMenuContainerContainer1;
extern lv_obj_t * ui_MainMenuLabelLabel1;
void ui_event_MainMenuSwitchSwitch1(lv_event_t * e);
extern lv_obj_t * ui_MainMenuSwitchSwitch1;
extern lv_obj_t * ui_MainMenuContainerContainer2;
void ui_event_MainMenuSliderSlider1(lv_event_t * e);
extern lv_obj_t * ui_MainMenuSliderSlider1;
void ui_event_MainMenuButtonTestButton(lv_event_t * e);
extern lv_obj_t * ui_MainMenuButtonTestButton;
extern lv_obj_t * ui_MainMenuLabelTestButtonLabel;
extern lv_obj_t * ui_MainMenuLabelLabel4;
// CUSTOM VARIABLES
extern lv_obj_t * uic_ScreenMainMenu;
extern lv_obj_t * uic_TextArea2;
extern lv_obj_t * uic_MainMenuLabelTestButtonLabel;

// EVENTS

extern lv_obj_t * ui_Startevents___initial_actions0;

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
