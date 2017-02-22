{dede:noteinfo notename="飘花采集" channelid="1" macthtype="string"
    refurl="http://" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="1" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="(#)"
startid="1" endid="" addv="1" urlrule="area" musthas=""
 nothas="" listpic="1" usemore="1"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}[(#)=>http://www.piaohua.com/html/dongzuo/list_(*).html; (*)=>1-1; typeid=>1] 
[(#)=>http://www.piaohua.com/html/xiju/list_(*).html; (*)=>1-1; typeid=>2] 
[(#)=>http://www.piaohua.com/html/aiqing/list_(*).html; (*)=>1-1; typeid=>3]
[(#)=>http://www.piaohua.com/html/kehuan/list_(*).html; (*)=>1-1; typeid=>4]
[(#)=>http://www.piaohua.com/html/juqing/list_(*).html; (*)=>1-1; typeid=>5]
[(#)=>http://www.piaohua.com/html/xuannian/list_(*).html; (*)=>1-1; typeid=>6]
[(#)=>http://www.piaohua.com/html/wenyi/list_(*).html; (*)=>1-1; typeid=>7]
[(#)=>http://www.piaohua.com/html/zhanzheng/list_(*).html; (*)=>1-1; typeid=>8]
[(#)=>http://www.piaohua.com/html/kongbu/list_(*).html; (*)=>1-1; typeid=>9]
[(#)=>http://www.piaohua.com/html/zainan/list_(*).html; (*)=>1-1; typeid=>10]
[(#)=>http://www.piaohua.com/html/lianxuju/list_(*).html; (*)=>1-1; typeid=>11]
[(#)=>http://www.piaohua.com/html/dongman/list_(*).html; (*)=>1-1; typeid=>12]
[(#)=>http://www.piaohua.com/html/huaijiu/list_(*).html; (*)=>1-1;typeid=>13]
[(#)=>http://www.piaohua.com/html/zongyijiemu/list_(*).html; (*)=>1-1; typeid=>14]
[(#)=>http://www.piaohua.com/html/mtv/list_(*).html; (*)=>1-1; typeid=>15]{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div id="list">{/dede:areastart}
    {dede:areaend}</div>{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.piaohua.com/html/zhanzheng/2012/0505/24278.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   {dede:trim replace=""}_迅雷下载_免费下载_飘花电影网{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}发布时间：[内容]<br/>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div id="showinfo">[内容]</div><ul class="mmlist">{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<font([^>]*)>{/dede:trim}
{dede:trim replace=""}</font>{/dede:trim}
{dede:trim replace=""}<strong([^>]*)>{/dede:trim}
{dede:trim replace=""}</strong>{/dede:trim}
{dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
   {dede:function}$rpstr = "www.piaohua.com";
$mystr = "www.xiaozhizhu.net";
@me = str_replace($rpstr,$mystr,@me);

{/dede:function}
{/dede:item}