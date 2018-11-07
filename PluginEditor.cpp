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
   //Button for a new window of sliders 
	addAndMakeVisible(bslid);
	bslid.onClick = [this] { showWindowSlider(); };
	bslid.setButtonText("WindowSlider");

	//Size of the main window
    setSize (800,600);
		
}

PluginNmAudioProcessorEditor::~PluginNmAudioProcessorEditor()
{
	closeAllWindows();
}

//==============================================================================
void PluginNmAudioProcessorEditor::paint (Graphics& g)
{
    //Characteristics of the main window
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    g.setColour (Colours::white);
    g.setFont (11.0f);
   
}

void PluginNmAudioProcessorEditor::resized()
{
    //Placement of the button for the window of slider
	auto area = getLocalBounds();
	bslid.setBounds(area.removeFromLeft(108).removeFromTop(20));
	
	
}

void PluginNmAudioProcessorEditor::showWindowSlider()
{
	
	auto* wsl = new WindowSlider("windowslider");
	//Add the window in the array
	windows.add(wsl);

	//Placement of the new window
	Rectangle<int> area(0, 0, 300, 400);
	RectanglePlacement placement( RectanglePlacement::xMid
		| RectanglePlacement::yMid
		| RectanglePlacement::doNotResize);

	auto result = placement.appliedTo(area, Desktop::getInstance().getDisplays()
		.getMainDisplay().userArea.reduced(20));
	wsl->setBounds(result);

	wsl->setResizable(true, true);
	wsl->setUsingNativeTitleBar(true);
	wsl->setVisible(true);
}

void PluginNmAudioProcessorEditor::closeAllWindows()
{
	//Loop in the array to destroy each window
	for (auto& window : windows)
		window.deleteAndZero();
	//Clear the array
	windows.clear();
}