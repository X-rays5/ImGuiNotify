#ifndef CONFIG_HPP
#define CONFIG_HPP

// Max message content length
#define NOTIFY_MAX_MSG_LENGTH 4096

// Bottom-left X padding
#define NOTIFY_PADDING_X 20.0f

// Bottom-left Y padding
#define NOTIFY_PADDING_Y 20.0f

// Padding Y between each message
#define NOTIFY_PADDING_MESSAGE_Y 10.0f

// Fade in and out duration
#define NOTIFY_FADE_IN_OUT_TIME 150

// Auto dismiss after X ms (default, applied only if no data provided in constructors)
#define NOTIFY_DEFAULT_DISMISS 3000

// 0-1 Toast opacity
#define NOTIFY_OPACITY 1.f

// If true, a separator will be rendered between the title and the content
#define NOTIFY_USE_SEPARATOR true

// If true, a dismiss button will be rendered in the top right corner of the toast
#define NOTIFY_USE_DISMISS_BUTTON false

// Max number of toasts rendered at the same time. Set to 0 for unlimited
#define NOTIFY_RENDER_LIMIT 0

// If true, the notifications will be rendered in the corner of the monitor, otherwise in the corner of the main window (requires ImGui docking)
#define NOTIFY_RENDER_OUTSIDE_MAIN_WINDOW false

// Set the corner the notifications will be rendered in (topleft, topright, bottomleft, bottomright)
#define NOTIFY_START_CORNER "topright"

#endif // CONFIG_HPP
