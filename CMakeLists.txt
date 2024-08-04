cmake_minimum_required(VERSION 3.16)
project(ImGuiNotify)

add_library(${PROJECT_NAME} INTERFACE)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

# Max message content length
SET(NOTIFY_MAX_MSG_LENGTH  "4096")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_MAX_MSG_LENGTH=${NOTIFY_MAX_MSG_LENGTH})

# Bottom-left X padding
SET(NOTIFY_PADDING_X "20.f")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_PADDING_X=${NOTIFY_PADDING_X})

# Bottom-left Y padding
SET(NOTIFY_PADDING_Y "20.f")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_PADDING_Y=${NOTIFY_PADDING_Y})

# Padding Y between each message
SET(NOTIFY_PADDING_MESSAGE_Y "10.f")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_PADDING_MESSAGE_Y=${NOTIFY_PADDING_MESSAGE_Y})

# Fade in and out duration
SET(NOTIFY_FADE_IN_OUT_TIME "150")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_FADE_IN_OUT_TIME=${NOTIFY_FADE_IN_OUT_TIME})

# Auto dismiss after X ms (default, applied only of no data provided in constructors)
SET(NOTIFY_DEFAULT_DISMISS "3000")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_DEFAULT_DISMISS=${NOTIFY_DEFAULT_DISMISS})

# 0-1 Toast opacity
SET(NOTIFY_OPACITY "0.8f")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_OPACITY=${NOTIFY_OPACITY})

# If true, a separator will be rendered between the title and the content
SET(NOTIFY_USE_SEPARATOR "false")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_USE_SEPARATOR=${NOTIFY_USE_SEPARATOR})

# If true, a dismiss button will be rendered in the top right corner of the toast
SET(NOTIFY_USE_DISMISS_BUTTON "true")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_USE_DISMISS_BUTTON=${NOTIFY_USE_DISMISS_BUTTON})

# Max number of toasts rendered at the same time. Set to 0 for unlimited
SET(NOTIFY_RENDER_LIMIT "0")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_RENDER_LIMIT=${NOTIFY_RENDER_LIMIT})

# If true, the notifications will be rendered in the corner of the monitor, otherwise in the corner of the main window (required ImGui docking)
SET(NOTIFY_RENDER_OUTSIDE_MAIN_WINDOW "false")
target_compile_definitions(${PROJECT_NAME} INTERFACE NOTIFY_RENDER_OUTSIDE_MAIN_WINDOW=${NOTIFY_RENDER_OUTSIDE_MAIN_WINDOW})

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
target_include_directories(${PROJECT_NAME} INTERFACE include)