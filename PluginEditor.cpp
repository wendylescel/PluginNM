/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "WindowSlider.h"

//==============================================================================
PluginNmAudioProcessorEditor::PluginNmAudioProcessorEditor (PluginNmAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
	addAndMakeVisible(bslid);
	bslid.addListener(this);
	bslid.setButtonText("WindowSlider");
    setSize (400, 300);

	window = new ResizableWindow("WindowSlider", true);
	window->setUsingNativeTitleBar(true);
	window->setCentrePosition(400, 400);
	window->setVisible(false);
	window->setResizable(false, false);
	window->setContentOwned(new WindowSlider("WindowSlider"),true); // maybe rename that to NewGUI or similar
}

PluginNmAudioProcessorEditor::~PluginNmAudioProcessorEditor()
{
	bslid.removeListener(this);
}

//==============================================================================
void PluginNmAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void PluginNmAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
	bslid.setBounds(0, 0, 20, 20);
}

void PluginNmAudioProcessorEditor::buttonClicked(Button * button)
{
	window->setVisible(true);

}
