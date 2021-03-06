void Mobius()
{
    int pnum = 0;
    mob[1] = 1;
    for(int i = 2; i < MAX; i++)
    {
        if(noprime[i])
        {
            p[pnum ++] = i;
            mob[i] = -1;
        }
        for(int j = 0; j < pnum && i * p[j] < MAX; j++)
        {
            noprime[i * p[j]] = false;
            if(i % p[j] == 0)
            {
                mob[i * p[j]] = 0;
                break;
            }
            mob[i * p[j]] = -mob[i];
        }
    }
}


ll prime[maxn],mob[maxn],vis[maxn],cnt;

//O(n)
void Mobius(){
    memset(prime,0,sizeof(prime));
    memset(mob,0,sizeof(mob));
    memset(vis,0,sizeof(vis));
    mob[1] = 1;
    cnt = 0;
    for(ll i = 2;i < maxn; i++){
        if(!vis[i]){
            prime[cnt++] = i;
            mob[i] = -1;
        }
        for(ll j = 0;j < cnt&&i*prime[j] < maxn;j++){
            vis[i*prime[j]] = 1;
            if(i%prime[j]) mob[i*prime[j]] = -mob[i];
            else{
                mob[i*prime[j]] = 0;
                break;
            }
        }
    }
}

//O(n)
void mobius() {
    fill(isPrime, isPrime + maxn, 1);
    mu[1] = 1, num = 0;
    for (int i = 2; i < maxn; ++i) {
        if (isPrime[i]) primes[num++] = i, mu[i] = -1;
        static int d;
        for (int j = 0; j < num && (d = i * primes[j]) < maxn; ++j) {
            isPrime[d] = false;
            if (i % primes[j] == 0) {
                mu[d] = 0;
                break;
            } else mu[d] = -mu[i];
        }
    }
}
