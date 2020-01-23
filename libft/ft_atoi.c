
int ft_atoi(const char *str)
{
    int i;
    int neg;
    int sinais;
    int ret;

    i = 0;
    ret = 0; 
    neg = 0;
    sinais = 0;
    while (str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        sinais++;
        if (str[i] == '-')
            neg++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret = (ret * 10) + (str[i] - 48);
        i++;
    }
    if (neg > 1 || sinais > 1)
        return (0);
    else if (neg == 1)
        ret *= -1;
    return (ret);
}
