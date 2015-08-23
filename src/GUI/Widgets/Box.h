/*!
  boldtemple Gaming ©, http://gaming.boldtemple.net
  OpenSource Project - Check Development, License & Readme Sections.
  
  BGE - boldtemple Cross Platform Game Engine
  /GUI/Widgets/Box.h
!*/

#ifndef SRC_GUI_BOX_H_
#define SRC_GUI_BOX_H_

#include <string>
#include <sstream>

#include "Render/Sprite.h"
#include "GUI/Widget.h"
#include "GUI/Text.h"

class Box: public Widget {
public:
    Box(Object* owner, const Vec2& pos, const Vec2& size, const std::string& font, int font_pt_size);
    virtual ~Box();

    virtual void SetPos(const Vec2& pos);
    virtual void OnUpdate();
    virtual void OnRender();
    virtual void OnClick();

    void SetText(const std::string& str);

protected:
    const int TEXT_OFFSET = 4; // pixels
    const int LINE_SPACE = 1;

    SDL_Texture* _text_texture;
    Text _text;
    SDL_Rect _text_draw_rect;
    Vec2 _text_size;
};

#endif /* SRC_GUI_BOX_H_ */
