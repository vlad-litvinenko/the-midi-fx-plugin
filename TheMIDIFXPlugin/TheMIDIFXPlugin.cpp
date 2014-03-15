//
//  TheMIDIFXPlugin.cpp
//  TheMIDIFXPlugin
//

#include "TheMIDIFXPlugin.h"

AUDIOCOMPONENT_ENTRY(AUMIDIEffectFactory, TheMIDIFXPlugin)

TheMIDIFXPlugin::TheMIDIFXPlugin(AudioUnit unit) : AUMIDIEffectBase(unit) {};