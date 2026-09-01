days[1] = 29;

        int ans =0;
        for(int i=0;i<month-1;i++){
            ans = ans + days[i];
        }
        ans += day;
        return ans;
    }