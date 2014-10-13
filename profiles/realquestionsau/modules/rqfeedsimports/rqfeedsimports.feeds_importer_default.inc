<?php
/**
 * @file
 * rqfeedsimports.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function rqfeedsimports_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'election';
  $feeds_importer->config = array(
    'name' => 'Election',
    'description' => 'election information',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'doe_start',
            'target' => 'field_date_of_election:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'doe_end',
            'target' => 'field_date_of_election:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'electoratetype',
            'target' => 'field_electorate_type',
            'term_search' => '1',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'election',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['election'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'electorate';
  $feeds_importer->config = array(
    'name' => 'Electorate',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ElectorateID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Electorate',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'SystemElectoralTypeID',
            'target' => 'field_electorate_type',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          3 => array(
            'source' => 'Electorate_Current',
            'target' => 'field_current',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'ElectorateNotes',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'electorate',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['electorate'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'party_memberships';
  $feeds_importer->config = array(
    'name' => 'Step 5 Party Memberships',
    'description' => 'Party Memberships of the Politician',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'StartDate',
            'target' => 'field_dateleft:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'EndDate',
            'target' => 'field_dateleft:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'userguid',
            'target' => 'field_userreference:guid:duplicates',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'partyguid',
            'target' => 'field_parties',
            'term_search' => '2',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'party_membership',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['party_memberships'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'step4_position';
  $feeds_importer->config = array(
    'name' => 'step4_position',
    'description' => 'Politician Positional Info',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Politician',
            'target' => 'field_userreference:guid:duplicates',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Position',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'dateappointed',
            'target' => 'field_doj:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'datecompleted',
            'target' => 'field_doj:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Electorate',
            'target' => 'field_electorate:guid:duplicates',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Elections',
            'target' => 'field_elections:guid:duplicates',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'positiontype',
            'target' => 'field_position_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'path_disable',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'position',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['step4_position'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'steps1to3';
  $feeds_importer->config = array(
    'name' => 'Steps1to3',
    'description' => 'Single Point Import for earlier steps 1 thru to three. Politician user profiles.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          4 => '4',
          3 => 0,
          5 => 0,
          6 => 0,
        ),
        'status' => '0',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'UserName',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Mail',
            'target' => 'mail',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'FirstName',
            'target' => 'profile2:main:field_firstname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Lastname',
            'target' => 'profile2:main:field_lastname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Town',
            'target' => 'profile2:main:field_suburb',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'State',
            'target' => 'profile2:main:field_states',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'ReceiveNewsletters',
            'target' => 'profile2:main:field_newsletter',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Postcode',
            'target' => 'profile2:main:field_postcode',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Street',
            'target' => 'profile2:main:field_street',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Country',
            'target' => 'profile2:main:field_country',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Alias',
            'target' => 'profile2:politicians:field_alias',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'DateOfBirth',
            'target' => 'profile2:politicians:field_dob',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Honorific',
            'target' => 'profile2:politicians:field_honorific',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Honors',
            'target' => 'profile2:politicians:field_honoros',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Phone',
            'target' => 'profile2:main:field_phones',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'AccountStatus',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['steps1to3'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'taxo_parties';
  $feeds_importer->config = array(
    'name' => 'taxo_parties',
    'description' => 'Parties Taxonomy',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'PartyID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'PartyAbbrev',
            'target' => 'field_partyabbrev',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'PartyShortName',
            'target' => 'field_partyshortname',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'PartyFullName',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'party_definition',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['taxo_parties'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'taxo_state';
  $feeds_importer->config = array(
    'name' => 'taxo_state',
    'description' => 'import taxonomy for state',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => -1,
        'author' => 0,
        'mappings' => array(),
        'update_existing' => 0,
        'input_format' => NULL,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['taxo_state'] = $feeds_importer;

  return $export;
}
