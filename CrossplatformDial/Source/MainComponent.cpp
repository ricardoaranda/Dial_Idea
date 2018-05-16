/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    dial.setNormalisableRange (NormalisableRange<double> (0.0f, 1.0f, 0.01f));
    dial.setSliderStyle (Slider::Rotary);
    dial.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
    dial.setLookAndFeel (&otherLookAndFeel);
    
    addAndMakeVisible (dial);
    
    setSize (500, 400);
    setAudioChannels (2, 2);
}

MainComponent::~MainComponent()
{
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll(Colours::black);
}

void MainComponent::resized()
{
    dial.setBounds (getLocalBounds().reduced(20));
}
