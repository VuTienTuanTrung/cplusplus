#include "Camera.h"

Camera* Camera::s_Instance = nullptr;

//Update vị trí camera theo vị trí của player.
void Camera::Update(float dt){

    if(m_Target != nullptr){        //nếu Point target không rỗng

        //Cập nhật vị trí rect m_ViewBox theo vị trí của player.
        m_ViewBox.x = m_Target->X - SCREEN_WIDTH / 2;
        m_ViewBox.y = m_Target->Y - SCREEN_HEIGHT / 2;

        //nếu nhân vật chưa đi quá giữa màn hình thì giữ nguyên giá trị.
        if(m_ViewBox.x < 0){
            m_ViewBox.x = 0;
        }
        if(m_ViewBox.y < 0){
            m_ViewBox.y = 0;
        }

        //Nếu vượt  quá giới hạn n*SCREEN_WIDTH thì giữ nguyên giá trị.
        if(m_ViewBox.x > (2*SCREEN_WIDTH - m_ViewBox.w)){
            m_ViewBox.x = (2*SCREEN_WIDTH - m_ViewBox.w);
        }

        if(m_ViewBox.y > (15*SCREEN_HEIGHT - m_ViewBox.h)){
            m_ViewBox.y = (15*SCREEN_HEIGHT - m_ViewBox.h);
        }

        m_Position = Vector2D(m_ViewBox.x, m_ViewBox.y);
    }
}

