google.load('visualization', '1', {
    'callback': 'drawChart',
    packages: [
        'corechart'
    ]
});
function drawChart() {
    var data = google.visualization.arrayToDataTable([
    ['State',
    'Donation $',
    {
        role: 'style'
    }
    ],
    [
        'FED',
        12400,
        '#601BC6'
    ],
    [
        'VIC',
        12400,
        '#070938'
    ],
    [
        'SA',
        12400,
        '#F92121'
    ],
    [
        'TAS',
        12400,
        '#004C25'
    ],
    [
        'WA',
        2100,
        '#D2AE02'
    ],
    [
        'NT',
        1500,
        '#282000'
    ],
    [
        'ACT',
        1000,
        '#0C2CA3'
    ],
    [
        'NSW',
        1000,
        '#87CEFA'
    ],
    [
        'QLD',
        1000,
        '#830300'
    ],
    ]);
    var options = {
        title: 'Maximum political donation without disclosure - by State',
        hAxis: {
            title: 'State or Territory (* Commonwealth not shown in map below)',
            titleTextStyle: {
                color: 'black'
            }
        }
    };
    var chart = new google.visualization.ColumnChart(document.getElementById('chart_div'));
    chart.draw(data, options);
}

google.load('visualization', '1', {
    'callback': 'drawMarkersMap',
    packages: [
        'corechart'
    ]
});

    function drawMarkersMap() {
    var data = google.visualization.arrayToDataTable([
        ['City',   'Donation $'],
                ['AU-VIC', 12400 ],
                ['AU-TAS', 12400],
                ['AU-NSW', 1000],
                ['AU-QLD', 1000],
                ['AU-NT', 1500],
                ['AU-WA', 2100],
                ['AU-SA', 12400],
                ['AU-ACT', 1000]
          ]);
    
     var options = {
        region: 'AU',
        width: 900,
        height: 500,
        displayMode: 'markers',
        colorAxis: {colors: ['#9C5DFA', '#290D52']},
        resolution: 'provinces',
    };
                     
        
    var chart = new google.visualization.GeoChart(document.getElementById('chart_div1'));
        chart.draw(data, options);

    }

google.load('visualization', '1', {
    'callback': 'drawChart29may',
    packages: [
        'corechart'
    ]
});    
function drawChart29may() {
    var data = google.visualization.arrayToDataTable([
    ['State',
    'Donation $',
    {
        role: 'style'
    }
    ],
    [
        'FED',
        12400,
        '#601BC6'
    ],
    [
        'VIC',
        12400,
        '#070938'
    ],
    [
        'SA',
        12400,
        '#F92121'
    ],
    [
        'TAS',
        12400,
        '#004C25'
    ],
    [
        'WA',
        2100,
        '#D2AE02'
    ],
    [
        'NT',
        1500,
        '#282000'
    ],
    [
        'ACT',
        1000,
        '#0C2CA3'
    ],
    [
        'NSW',
        1000,
        '#87CEFA'
    ],
    [
        'QLD',
        12400,
        '#830300'
    ],
    ]);
    var options = {
        title: 'Maximum political donation without disclosure - by State',
        hAxis: {
            title: 'State or Territory (* Commonwealth not shown in map below)',
            titleTextStyle: {
                color: 'black'
            }
        }
    };
    var chart = new google.visualization.ColumnChart(document.getElementById('chart_div29may'));
    chart.draw(data, options);
}

google.load('visualization', '1', {
    'callback': 'drawMarkersMap29may',
    packages: [
        'corechart'
    ]
});

    function drawMarkersMap29may() {
    var data = google.visualization.arrayToDataTable([
        ['City',   'Donation $'],
                ['AU-VIC', 12400 ],
                ['AU-TAS', 12400],
                ['AU-NSW', 1000],
                ['AU-QLD', 12400],
                ['AU-NT', 1500],
                ['AU-WA', 2100],
                ['AU-SA', 12400],
                ['AU-ACT', 1000]
          ]);
    
     var options = {
        region: 'AU',
        width: 900,
        height: 500,
        displayMode: 'markers',
        colorAxis: {colors: ['#9C5DFA', '#290D52']},
        resolution: 'provinces',
    };
                     
        
    var chart = new google.visualization.GeoChart(document.getElementById('chart_div129may'));
        chart.draw(data, options);

    }
        

$(document).ready(function()
{
google.setOnLoadCallback(drawVisualization);
});
