cmake_minimum_required(VERSION 3.16)
project(ImGuiNotify)

add_library(${PROJECT_NAME} INTERFACE)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

# Max message content length
set(NOTIFY_MAX_MSG_LENGTH 4096)

# Bottom-left X padding
set(NOTIFY_PADDING_X 20.0f)

# Bottom-left Y padding
set(NOTIFY_PADDING_Y 20.0f)

# Padding Y between each message
set(NOTIFY_PADDING_MESSAGE_Y 10.0f)

# Fade in and out duration
set(NOTIFY_FADE_IN_OUT_TIME 150)

# Auto dismiss after X ms (default, applied only of no data provided in constructors)
set(NOTIFY_DEFAULT_DISMISS 3000)

# 0-1 Toast opacity
set(NOTIFY_OPACITY 1.f)

# If true, a separator will be rendered between the title and the content
set(NOTIFY_USE_SEPARATOR true)

# If true, a dismiss button will be rendered in the top right corner of the toast
set(NOTIFY_USE_DISMISS_BUTTON false)

# Max number of toasts rendered at the same time. Set to 0 for unlimited
set(NOTIFY_RENDER_LIMIT 0)

# If true, the notifications will be rendered in the corner of the monitor, otherwise in the corner of the main window (required ImGui docking)
set(NOTIFY_RENDER_OUTSIDE_MAIN_WINDOW false)

# Configure the config.hpp file
file(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/include/ImGuiNotify/config.hpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.hpp.in ${CMAKE_CURRENT_SOURCE_DIR}/include/ImGuiNotify/config.hpp)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
target_include_directories(${PROJECT_NAME} INTERFACE include)