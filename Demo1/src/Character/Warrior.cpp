#include "Warrior.h"
#include "TextureManager.h"
#include "SDL.h"

Warrior::Warrior(Properties* props):Character(props)
{
    /*m_Row = 1;
    m_FrameCount = 6;
    m_AnimaSpeed = 180;*/
    m_RigidBody =  new Rigidbody();
     m_Animation= new Animation();
m_Animation->SetProps(m_TextureID,1,6,80,SDL_FLIP_HORIZONTAL);
}

void Warrior::Draw()
{
    m_Animation->Draw(m_Transform->X,m_Transform->Y,m_Width,m_Height);
}



void Warrior::Update(float dt)
{
    m_RigidBody->Update(0.5);
    m_RigidBody->ApplyForceX(5);
   /* m_Transform->X += m_RigidBody->Position().X;
    m_Transform->Y += m_RigidBody->Position().Y;*/
     m_Transform->TranslateX(m_RigidBody->Position().X);
     m_Transform->TranslateY(m_RigidBody->Position().Y);

    m_Animation->Update();
}

void Warrior::Clean()
{
    TextureManager::GetInstance() ->Clean();
}
