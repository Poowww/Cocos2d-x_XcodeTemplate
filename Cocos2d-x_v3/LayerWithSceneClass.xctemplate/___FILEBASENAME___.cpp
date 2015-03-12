//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

using namespace cocos2d;

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
    auto scene = Scene::create();
    auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
    scene->addChild(layer);

    return scene;
}
___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{

}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{

}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if ( !Layer::init() ) {
        return false;
    }

    <#your initialize code...#>

    return true;
}