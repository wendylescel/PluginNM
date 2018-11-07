/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PluginNmAudioProcessorEditor  : public AudioProcessorEditor, public Button::Listener
{
public:
    PluginNmAudioProcessorEditor (PluginNmAudioProcessor&);
    ~PluginNmAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
	void buttonClicked(Button * button) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PluginNmAudioProcessor& processor;
	TextButton bslid;
	ScopedPointer<ResizableWindow> window;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginNmAudioProcessorEditor)
};
