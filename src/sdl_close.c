#include <wolf3d.h>

void	ft_sdl_close(t_m *m)
{
	int i;

	TTF_CloseFont(m->font.type);
	i = 0;
	while (i < TXTR_SIZE)
	{
		SDL_DestroyTexture(m->tex.buf[i]);
		i++;
	}
	Mix_FreeMusic(m->music.audio);
	Mix_CloseAudio();
	SDL_DestroyRenderer(m->wnd.p_rend);
	SDL_DestroyWindow(m->wnd.p_wnd);
	TTF_Quit();
	SDL_Quit();
}