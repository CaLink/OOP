#include "Checker.h"

Checker::Checker()
{
	posts = 100;
}

Checker::Checker(int post)
{
	posts = post;
}

int Checker::Check(int post)
{

	mu.lock();

    int ans = 0;

    if (posts >= post)
    {
        posts = posts - post;
        ans = post;
    }
    else
    {
        ans = posts-post;
        posts = 0;
    }

    std::this_thread::sleep_for(std::chrono::seconds(post * 2));
    mu.unlock();

	return ans;
}