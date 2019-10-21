#define OLC_PGE_APPLICATION

#include "PixelGameEngine.h"

class BeatUp : public olc::PixelGameEngine {
public:
	BeatUp() {
		sAppName = "Takeshi Beat Up";
	}

private:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}
	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame, draws random coloured pixels
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));
		return true;
	}
};

int main() {
	BeatUp game;

	if (game.Construct(1200, 900, 1, 1))
		game.Start();

	return 0;
}