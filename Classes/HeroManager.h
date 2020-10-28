#include "IObjectManager.h"
#include "Pool.h"
#include "cocos2d.h"

class HeroShip;
class Rocket;

class HeroManager : public IObjectManager
{
private:
    static HeroManager* _instance;
public:
    static HeroManager* instance();
    HeroManager();
	~HeroManager();
	void update(float dt);
	void initialize(float visibleWidth, float visibleHeight, float originX, float originY);
    HeroShip* heroShip() { return m_pHeroShip; }

    
    
public: // dokunma olayları için
	void onTouchBegan(float touchX, float touchY);
	void onTouchMoved(float touchX, float touchY);
	void onTouchEnded(float touchX, float touchY);

private:
	void reloadRocket();
private:
    HeroShip* m_pHeroShip;

private: // durum değişkenlerine dokunun
	bool m_bTouchBegan;
	float m_touchX, m_touchY;
	float m_fRocketReloadTimer;
};


