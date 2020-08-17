

    while (t--)
    {
        cin >> l;
        vector<int> arr;

        for (int i = 0; i < l; i++)
        {
            cin >> cle;
            arr.push_back(cle);
        }

        printSubsequences(arr, 0, b);