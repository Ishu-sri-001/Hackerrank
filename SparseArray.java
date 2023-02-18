import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'matchingStrings' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts following parameters:
     *  1. STRING_ARRAY stringList
     *  2. STRING_ARRAY queries
     */

    public static List<Integer> matchingStrings(List<String> sl, List<String> q) {
     List<Integer> l = new ArrayList<>();
     HashMap<String,Integer>map= new HashMap<>();
     for (String s : sl) {
        if (!map.containsKey(s)) {
            map.put(s, 1);
        } else {
            map.put(s, map.get(s) + 1);
        }
    }
    for (String qu : q) {
        if (map.containsKey(qu)) {
            l.add(map.get(qu));
        } else {
            l.add(0);
        }
    }
    //    for (int i=0;i<sl.size();i++)
    //    {
    //     if (mp.containsKey(sl.get(i)))
    //         mp.put(sl.get(i),mp.get(sl.get(i)+1));
    //     else 
    //         mp.put(sl.get(i),1);
    //    }
    // for (int i=0;i<q.size();i++)
    // {
    //     if(mp.containsKey(q.get(i)))
    //         l.add(mp.getValue(q.get(i)));
    //     else
    //         l.add(0);
    // }
    return l;
}
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int stringListCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> stringList = IntStream.range(0, stringListCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        })
            .collect(toList());

        int queriesCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> queries = IntStream.range(0, queriesCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        })
            .collect(toList());

        List<Integer> res = Result.matchingStrings(stringList, queries);

        bufferedWriter.write(
            res.stream()
                .map(Object::toString)
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}
