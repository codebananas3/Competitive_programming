

    int t_c, i, a, b, c;
    std::cin >> t_c;

    for (i = 0; i < t_c; i++)
    {
        std::cin >> a;

        if (a < 2)
        {
            std::cout << "NO\n";
        }

        if (a >= 2 && a < 7)
        {
            if (a % 2 == 0)
            {
                std::cout << "YES\n";
            }

            else
            {
                std::cout << "NO\n";
            }
        }

        if (a > 7)
        {
            b = a % 7;
            if (b % 2 == 0)
            {
                std::cout << "YES\n";
            }
            else
            {
                std::cout << "NO\n";
            }
        }

        if (a == 7)
        {
            std::cout << "YES\n";
        }
    }
    return 0;