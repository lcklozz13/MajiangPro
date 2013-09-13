//
//  PlayDesktopScene.h
//  MaJiong
//
//  Created by HalloWorld on 12-12-28.
//
//

#ifndef __MaJiong__PlayDesktopScene__
#define __MaJiong__PlayDesktopScene__

#include <iostream>
#include "cocos2d.h"
#include "DesktopLayer.h"

class PlayDesktopLayer : public DesktopLayer {
public:
    PlayDesktopLayer();
    virtual ~PlayDesktopLayer();
    virtual bool init();
    CREATE_FUNC(PlayDesktopLayer);
    
    virtual void initializeMajiong();
    virtual void randMaJiang();
    //select majiong
    virtual void SelectMajiong(MaJiongSprite *mj);
};

#endif /* defined(__MaJiong__PlayDesktopScene__) */
