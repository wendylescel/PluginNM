

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include <string>
//==============================================================================
/*
*/
class WindowSlider : public DocumentWindow
{
public:
	WindowSlider(String name) : DocumentWindow(name,
		Colours::darkgrey,
		DocumentWindow::allButtons)
	{
		centreWithSize(800, 800);
		setUsingNativeTitleBar(true);
	}

	void closeButtonPressed() override
	{
		this->setVisible(false);
	}


	~WindowSlider();


private:

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WindowSlider)
};
