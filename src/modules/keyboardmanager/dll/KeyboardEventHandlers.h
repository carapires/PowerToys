 #pragma once
#include <keyboardmanager/common/KeyboardManagerState.h>
#include <keyboardmanager/common/KeyboardManagerConstants.h>
#include "InputInterface.h"

namespace KeyboardEventHandlers
{
    // Function to a handle a single key remap
    intptr_t HandleSingleKeyRemapEvent(InputInterface &ii, LowlevelKeyboardEvent* data, KeyboardManagerState& keyboardManagerState) noexcept;

    // Function to a change a key's behavior from toggle to modifier
    intptr_t HandleSingleKeyToggleToModEvent(InputInterface &ii, LowlevelKeyboardEvent* data, KeyboardManagerState& keyboardManagerState) noexcept;

    // Function to a handle a shortcut remap
    intptr_t HandleShortcutRemapEvent(InputInterface &ii, LowlevelKeyboardEvent* data, std::map<Shortcut, RemapShortcut>& reMap, std::mutex& map_mutex) noexcept;

    // Function to a handle an os-level shortcut remap
    intptr_t HandleOSLevelShortcutRemapEvent(InputInterface &ii, LowlevelKeyboardEvent* data, KeyboardManagerState& keyboardManagerState) noexcept;

    // Function to a handle an app-specific shortcut remap
    intptr_t HandleAppSpecificShortcutRemapEvent(InputInterface &ii, LowlevelKeyboardEvent* data, KeyboardManagerState& keyboardManagerState) noexcept;
};
