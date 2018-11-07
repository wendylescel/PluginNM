

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
		Colours::lightgrey,
		DocumentWindow::allButtons)
	{
		centreWithSize(300, 200);
		setVisible(true);
	}

	void closeButtonPressed() override
	{
		JUCEApplication::getInstance()->systemRequestedQuit();
	}

	
	~WindowSlider();

	void paint(Graphics&) override;
	void resized() override;

	



private:
	ScopedPointer<WindowSlider> windowSlider;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WindowSlider)
};
