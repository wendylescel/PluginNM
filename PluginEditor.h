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
class PluginNmAudioProcessorEditor  : public AudioProcessorEditor
{
public:


    PluginNmAudioProcessorEditor (PluginNmAudioProcessor&);
    ~PluginNmAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
	void showWindowSlider();
	void closeAllWindows();

private:
    
    PluginNmAudioProcessor& processor;
	TextButton bslid;

	//Array of different windows, easier to handle show, hide
	Array<Component::SafePointer<ResizableWindow>> windows;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginNmAudioProcessorEditor)
};
