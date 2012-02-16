<?php
/**
 * @file
 * humanitarianresponse_documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function humanitarianresponse_documents_taxonomy_default_vocabularies() {
  $export = array(
    'document_regions' => array(
      'name' => 'Document regions',
      'machine_name' => 'document_regions',
      'description' => 'HumanitarianResponse regions used in documents',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
  
  if (module_exists('grupal_i18n')) {
    foreach ($export as $key => $taxonomy) {
      $export[$key]['i18n_mode'] = '1';
    }
  }
  
  return $export;
}
