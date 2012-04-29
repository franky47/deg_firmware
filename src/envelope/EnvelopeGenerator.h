/*!
 *  @file		EnvelopeGenerator.h
 *  Project		DEG
 *	@brief		Envelope generation algorithm
 *  @author		Francois Best 
 *	@date		29/04/12
 *  @license	CC-BY-NC-SA Forty Seven Effects - 2012
 *
 * THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS 
 * OF THIS CREATIVE COMMONS PUBLIC LICENSE ("CCPL" OR "LICENSE").
 * THE WORK IS PROTECTED BY COPYRIGHT AND/OR OTHER APPLICABLE LAW. 
 * ANY USE OF THE WORK OTHER THAN AS AUTHORIZED UNDER THIS LICENSE 
 * OR COPYRIGHT LAW IS PROHIBITED.
 * 
 * BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT 
 * AND AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE. 
 * TO THE EXTENT THIS LICENSE MAY BE CONSIDERED TO BE A CONTRACT, 
 * THE LICENSOR GRANTS YOU THE RIGHTS CONTAINED HERE IN CONSIDERATION 
 * OF YOUR ACCEPTANCE OF SUCH TERMS AND CONDITIONS.
 * http://creativecommons.org/licenses/by-nc-sa/3.0/
 */

#ifndef _FSE_ENVELOPE_GENERATOR_H_
#define _FSE_ENVELOPE_GENERATOR_H_


/*! \class EnvelopeGenerator 
 \brief 
 */
class EnvelopeGenerator 
{

public:
	
	/*==========================================================================
	 Construction and Destruction
	 ==========================================================================*/
	
	EnvelopeGenerator();
	
    
	/*==========================================================================
	 Control
	 ==========================================================================*/
	
    void gateOn();
    
    void gateOff();
    
    
    /*==========================================================================
	 Settings
	 ==========================================================================*/
	
    void setAttack(int inValue);
    
    void setDecay(int inValue);
    
    void setSustain(int inValue);
    
    void setRelease(int inValue);
    
	
private:
    
    enum eState 
    {
        Idle,
        Attack,
        Decay,
        Sustain,
        Release
    };
    
    eState                  mCurrentState;
    
    int                     mAttackTime;
    int                     mDecayTime;
    int                     mSustainLevel;
    int                     mReleaseTime;
    
};

#endif //_FSE_ENVELOPE_GENERATOR_H_
