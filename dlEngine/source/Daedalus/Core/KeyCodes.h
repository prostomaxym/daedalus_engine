#pragma once

// Taken from glfw3.h


// ----------------------- Keyboard Codes ------------------------------ //
/* Printable keys */
#define DL_KEY_SPACE              32
#define DL_KEY_APOSTROPHE         39  /* ' */
#define DL_KEY_COMMA              44  /* , */
#define DL_KEY_MINUS              45  /* - */
#define DL_KEY_PERIOD             46  /* . */
#define DL_KEY_SLASH              47  /* / */
#define DL_KEY_0                  48
#define DL_KEY_1                  49
#define DL_KEY_2                  50
#define DL_KEY_3                  51
#define DL_KEY_4                  52
#define DL_KEY_5                  53
#define DL_KEY_6                  54
#define DL_KEY_7                  55
#define DL_KEY_8                  56
#define DL_KEY_9                  57
#define DL_KEY_SEMICOLON          59  /* ; */
#define DL_KEY_EQUAL              61  /* = */
#define DL_KEY_A                  65
#define DL_KEY_B                  66
#define DL_KEY_C                  67
#define DL_KEY_D                  68
#define DL_KEY_E                  69
#define DL_KEY_F                  70
#define DL_KEY_G                  71
#define DL_KEY_H                  72
#define DL_KEY_I                  73
#define DL_KEY_J                  74
#define DL_KEY_K                  75
#define DL_KEY_L                  76
#define DL_KEY_M                  77
#define DL_KEY_N                  78
#define DL_KEY_O                  79
#define DL_KEY_P                  80
#define DL_KEY_Q                  81
#define DL_KEY_R                  82
#define DL_KEY_S                  83
#define DL_KEY_T                  84
#define DL_KEY_U                  85
#define DL_KEY_V                  86
#define DL_KEY_W                  87
#define DL_KEY_X                  88
#define DL_KEY_Y                  89
#define DL_KEY_Z                  90
#define DL_KEY_LEFT_BRACKET       91  /* [ */
#define DL_KEY_BACKSLASH          92  /* \ */
#define DL_KEY_RIGHT_BRACKET      93  /* ] */
#define DL_KEY_GRAVE_ACCENT       96  /* ` */
#define DL_KEY_WORLD_1            161 /* non-US #1 */
#define DL_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define DL_KEY_ESCAPE             256
#define DL_KEY_ENTER              257
#define DL_KEY_TAB                258
#define DL_KEY_BACKSPACE          259
#define DL_KEY_INSERT             260
#define DL_KEY_DELETE             261
#define DL_KEY_RIGHT              262
#define DL_KEY_LEFT               263
#define DL_KEY_DOWN               264
#define DL_KEY_UP                 265
#define DL_KEY_PAGE_UP            266
#define DL_KEY_PAGE_DOWN          267
#define DL_KEY_HOME               268
#define DL_KEY_END                269
#define DL_KEY_CAPS_LOCK          280
#define DL_KEY_SCROLL_LOCK        281
#define DL_KEY_NUM_LOCK           282
#define DL_KEY_PRINT_SCREEN       283
#define DL_KEY_PAUSE              284
#define DL_KEY_F1                 290
#define DL_KEY_F2                 291
#define DL_KEY_F3                 292
#define DL_KEY_F4                 293
#define DL_KEY_F5                 294
#define DL_KEY_F6                 295
#define DL_KEY_F7                 296
#define DL_KEY_F8                 297
#define DL_KEY_F9                 298
#define DL_KEY_F10                299
#define DL_KEY_F11                300
#define DL_KEY_F12                301
#define DL_KEY_F13                302
#define DL_KEY_F14                303
#define DL_KEY_F15                304
#define DL_KEY_F16                305
#define DL_KEY_F17                306
#define DL_KEY_F18                307
#define DL_KEY_F19                308
#define DL_KEY_F20                309
#define DL_KEY_F21                310
#define DL_KEY_F22                311
#define DL_KEY_F23                312
#define DL_KEY_F24                313
#define DL_KEY_F25                314
#define DL_KEY_KP_0               320
#define DL_KEY_KP_1               321
#define DL_KEY_KP_2               322
#define DL_KEY_KP_3               323
#define DL_KEY_KP_4               324
#define DL_KEY_KP_5               325
#define DL_KEY_KP_6               326
#define DL_KEY_KP_7               327
#define DL_KEY_KP_8               328
#define DL_KEY_KP_9               329
#define DL_KEY_KP_DECIMAL         330
#define DL_KEY_KP_DIVIDE          331
#define DL_KEY_KP_MULTIPLY        332
#define DL_KEY_KP_SUBTRACT        333
#define DL_KEY_KP_ADD             334
#define DL_KEY_KP_ENTER           335
#define DL_KEY_KP_EQUAL           336
#define DL_KEY_LEFT_SHIFT         340
#define DL_KEY_LEFT_CONTROL       341
#define DL_KEY_LEFT_ALT           342
#define DL_KEY_LEFT_SUPER         343
#define DL_KEY_RIGHT_SHIFT        344
#define DL_KEY_RIGHT_CONTROL      345
#define DL_KEY_RIGHT_ALT          346
#define DL_KEY_RIGHT_SUPER        347
#define DL_KEY_MENU               348
// ------------------------------------------------------------------------- //


// ----------------------- Mouse Codes ------------------------------ //
#define DL_MOUSE_BUTTON_1         0
#define DL_MOUSE_BUTTON_2         1
#define DL_MOUSE_BUTTON_3         2
#define DL_MOUSE_BUTTON_4         3
#define DL_MOUSE_BUTTON_5         4
#define DL_MOUSE_BUTTON_6         5
#define DL_MOUSE_BUTTON_7         6
#define DL_MOUSE_BUTTON_8         7
#define DL_MOUSE_BUTTON_LAST      DL_MOUSE_BUTTON_8
#define DL_MOUSE_BUTTON_LEFT      DL_MOUSE_BUTTON_1
#define DL_MOUSE_BUTTON_RIGHT     DL_MOUSE_BUTTON_2
#define DL_MOUSE_BUTTON_MIDDLE    DL_MOUSE_BUTTON_3
// ------------------------------------------------------------------------- //


// ----------------------- Joystick Codes ---------------------------------- //
#define DL_JOYSTICK_1             0
#define DL_JOYSTICK_2             1
#define DL_JOYSTICK_3             2
#define DL_JOYSTICK_4             3
#define DL_JOYSTICK_5             4
#define DL_JOYSTICK_6             5
#define DL_JOYSTICK_7             6
#define DL_JOYSTICK_8             7
#define DL_JOYSTICK_9             8
#define DL_JOYSTICK_10            9
#define DL_JOYSTICK_11            10
#define DL_JOYSTICK_12            11
#define DL_JOYSTICK_13            12
#define DL_JOYSTICK_14            13
#define DL_JOYSTICK_15            14
#define DL_JOYSTICK_16            15
#define DL_JOYSTICK_LAST          DL_JOYSTICK_16


// ----------------------- Game Pad Codes ------------------------------ //
#define DL_GAMEPAD_BUTTON_A               0
#define DL_GAMEPAD_BUTTON_B               1
#define DL_GAMEPAD_BUTTON_X               2
#define DL_GAMEPAD_BUTTON_Y               3
#define DL_GAMEPAD_BUTTON_LEFT_BUMPER     4
#define DL_GAMEPAD_BUTTON_RIGHT_BUMPER    5
#define DL_GAMEPAD_BUTTON_BACK            6
#define DL_GAMEPAD_BUTTON_START           7
#define DL_GAMEPAD_BUTTON_GUIDE           8
#define DL_GAMEPAD_BUTTON_LEFT_THUMB      9
#define DL_GAMEPAD_BUTTON_RIGHT_THUMB     10
#define DL_GAMEPAD_BUTTON_DPAD_UP         11
#define DL_GAMEPAD_BUTTON_DPAD_RIGHT      12
#define DL_GAMEPAD_BUTTON_DPAD_DOWN       13
#define DL_GAMEPAD_BUTTON_DPAD_LEFT       14
#define DL_GAMEPAD_BUTTON_LAST            DL_GAMEPAD_BUTTON_DPAD_LEFT

#define DL_GAMEPAD_BUTTON_CROSS       DL_GAMEPAD_BUTTON_A
#define DL_GAMEPAD_BUTTON_CIRCLE      DL_GAMEPAD_BUTTON_B
#define DL_GAMEPAD_BUTTON_SQUARE      DL_GAMEPAD_BUTTON_X
#define DL_GAMEPAD_BUTTON_TRIANGLE    DL_GAMEPAD_BUTTON_Y

#define DL_GAMEPAD_AXIS_LEFT_X        0
#define DL_GAMEPAD_AXIS_LEFT_Y        1
#define DL_GAMEPAD_AXIS_RIGHT_X       2
#define DL_GAMEPAD_AXIS_RIGHT_Y       3
#define DL_GAMEPAD_AXIS_LEFT_TRIGGER  4
#define DL_GAMEPAD_AXIS_RIGHT_TRIGGER 5
#define DL_GAMEPAD_AXIS_LAST          DL_GAMEPAD_AXIS_RIGHT_TRIGGER
// ------------------------------------------------------------------------- //